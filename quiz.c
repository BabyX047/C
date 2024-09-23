#include <stdio.h>

// Function to display the question and return the score based on the user's answer
int ask_question(const char *question, const char *options[], char correct_answer) {
    char answer;
    
    printf("%s\n", question);
    for (int i = 0; i < 4; i++) {
        printf("%c) %s\n", 'A' + i, options[i]);
    }

    printf("Your answer: A/B/C/D");
    scanf(" %c", &answer);

    if (answer == correct_answer || answer == correct_answer + ('a' - 'A')) {
        printf("Correct!\n\n");
        return 1;  // return 1 if the answer is correct
    } else {
        printf("Wrong! The correct answer is %c.\n\n", correct_answer);
        return 0;  // return 0 if the answer is wrong
    }
}

int main() {
    int score = 0;
    const char *options1[] = {"Paris", "London", "Rome", "Berlin"};
    const char *options2[] = {"Saturn", "Mars", "Venus", "Jupiter"};
    const char *options3[] = {"Einstein", "Newton", "Galileo", "Curie"};

    // Asking questions and updating the score
    score += ask_question("What is the capital of France?", options1, 'A');
    score += ask_question("Which planet is known as the Red Planet?", options2, 'B');
    score += ask_question("Who developed the theory of relativity?", options3, 'A');

    // Final score display
    printf("Your final score: %d/3\n", score);

    if (score == 3) {
        printf("Excellent! You're a quiz master.\n");
    } else if (score == 2) {
        printf("Good job! Keep practicing.\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}
