#include <stdio.h>
#include <stdlib.h>   // for rand() and srand()
#include <time.h>     // for time()

// Function to get the computer's choice
char get_computer_choice() {
    int random_number;
    srand(time(0));   // Seed for random number generator
    random_number = rand() % 3;  // Generates 0, 1, or 2
    
    if (random_number == 0)
        return 'r';  // Rock
    else if (random_number == 1)
        return 'p';  // Paper
    else
        return 's';  // Scissors
}

// Function to determine the winner and update scores
void determine_winner(char player_choice, char computer_choice, int *player_score, int *computer_score) {
    if (player_choice == computer_choice) {
        printf("It's a tie!\n");
    } else if ((player_choice == 'r' && computer_choice == 's') ||
               (player_choice == 'p' && computer_choice == 'r') ||
               (player_choice == 's' && computer_choice == 'p')) {
        printf("You win this round!\n");
        (*player_score)++;  // Increment player score
    } else {
        printf("Computer wins this round!\n");
        (*computer_score)++;  // Increment computer score
    }
}

// Function to display the current scores
void display_scores(int player_score, int computer_score) {
    printf("\n--- Current Scores ---\n");
    printf("You: %d\n", player_score);
    printf("Computer: %d\n", computer_score);
    printf("----------------------\n\n");
}

int main() {
    char player_choice, computer_choice;
    int player_score = 0, computer_score = 0;  // Initialize scores to 0
    
    printf("Welcome to Rock, Paper, Scissors!\n");
    
    // Start a loop to keep playing until the player chooses to quit
    while (1) {
        // Prompt for player's choice
        printf("Enter your choice (r for Rock, p for Paper, s for Scissors, q to quit): ");
        scanf(" %c", &player_choice);  // Note the space before %c to avoid newline issues
        
        // Check if the player wants to quit
        if (player_choice == 'q' || player_choice == 'Q') {
            printf("Thanks for playing! Goodbye!\n");
            break;  // Exit the loop and end the game
        }

        // Check for valid input
        if (player_choice != 'r' && player_choice != 'p' && player_choice != 's') {
            printf("Invalid choice! Please choose 'r', 'p', or 's'.\n");
            continue;  // Skip the rest of the loop and ask for input again
        }

        // Get computer's choice
        computer_choice = get_computer_choice();

        // Print choices
        printf("You chose: %c\n", player_choice);
        printf("Computer chose: %c\n", computer_choice);

        // Determine the winner and update scores
        determine_winner(player_choice, computer_choice, &player_score, &computer_score);

        // Display the current scores after each round
        display_scores(player_score, computer_score);
    }

    return 0;
}
