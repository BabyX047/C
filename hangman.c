#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_TRIES 6  // Maximum number of incorrect guesses

// Function to select a random word from the predefined list and provide its hint (category)
const char* get_random_word_and_hint(const char** hint) {
    // List of words and their associated hints (categories)
    const char* word_list[] = {"computer", "hangman", "programming", "dog", "elephant", "syntax"};
    const char* hint_list[] = {"technology", "game", "coding", "animal", "animal", "coding"};

    int word_count = sizeof(word_list) / sizeof(word_list[0]);

    srand(time(0));  // Seed for random number generation
    int random_index = rand() % word_count;

    *hint = hint_list[random_index];  // Set the hint based on the chosen word
    return word_list[random_index];
}

// Function to update the display word (e.g., "_ _ a _ _ _")
void update_display_word(const char* word, char* display_word, char guess) {
    for (int i = 0; i < strlen(word); i++) {
        if (tolower(word[i]) == tolower(guess)) {
            display_word[i] = word[i];
        }
    }
}

// Function to check if the player has guessed the word
int is_word_guessed(const char* word, const char* display_word) {
    return strcmp(word, display_word) == 0;
}

// Main function
int main() {
    const char* hint;
    const char* word = get_random_word_and_hint(&hint);  // Get a random word and its hint
    int word_len = strlen(word);

    char display_word[word_len + 1];  // To display guessed characters and underscores
    for (int i = 0; i < word_len; i++) {
        display_word[i] = '_';  // Initialize with underscores
    }
    display_word[word_len] = '\0';  // Null-terminate the string

    int tries_left = MAX_TRIES;  // Number of tries left
    char guessed_letters[26] = {0};  // To store the guessed letters
    int guessed_count = 0;  // Number of guessed letters

    printf("Welcome to Hangman!\n");

    // Display the hint
    printf("Hint: The word is related to '%s'.\n", hint);

    // Main game loop
    while (tries_left > 0) {
        printf("\nHint: The word is related to '%s'.\n", hint);
        printf("\nWord: %s\n", display_word);
        printf("Tries left: %d\n", tries_left);
        printf("Guessed letters: ");
        for (int i = 0; i < guessed_count; i++) {
            printf("%c ", guessed_letters[i]);
        }
        printf("\n");

        char guess;
        printf("Enter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);  // Convert to lowercase to handle case sensitivity

        // Check if the letter was already guessed
        int already_guessed = 0;
        for (int i = 0; i < guessed_count; i++) {
            if (guessed_letters[i] == guess) {
                already_guessed = 1;
                break;
            }
        }
        if (already_guessed) {
            printf("You already guessed that letter!\n");
            continue;
        }

        guessed_letters[guessed_count++] = guess;  // Add guessed letter to the list

        // Check if the guessed letter is in the word
        if (strchr(word, guess)) {
            printf("Good guess!\n");
            update_display_word(word, display_word, guess);
        } else {
            printf("Wrong guess!\n");
            tries_left--;
        }

        // Check if the word is completely guessed
        if (is_word_guessed(word, display_word)) {
            printf("\nCongratulations! You guessed the word: %s\n", word);
            break;
        }
    }

    if (tries_left == 0) {
        printf("\nGame over! The word was: %s\n", word);
    }

    return 0;
}
