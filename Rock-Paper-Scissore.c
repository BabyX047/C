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

// Function to handle the Best of 10 mode
void best_of_ten() {
    int player_score = 0, computer_score = 0;
    char player_choice, computer_choice;

    while (player_score < 6 && computer_score < 6) {  // First to 6 wins
        printf("Enter your choice (r for Rock, p for Paper, s for Scissors): ");
        scanf(" %c", &player_choice);

        if (player_choice != 'r' && player_choice != 'p' && player_choice != 's') {
            printf("Invalid choice! Please choose 'r', 'p', or 's'.\n");
            continue;
        }

        computer_choice = get_computer_choice();
        printf("You chose: %c\n", player_choice);
        printf("Computer chose: %c\n", computer_choice);

        determine_winner(player_choice, computer_choice, &player_score, &computer_score);
        display_scores(player_score, computer_score);
    }

    if (player_score == 6) {
        printf("You win the Best of 10!\n");
    } else {
        printf("Computer wins the Best of 10!\n");
    }
}

// Function to handle the Infinite mode
void infinite_mode() {
    int player_score = 0, computer_score = 0;
    char player_choice, computer_choice;

    while (1) {
        printf("Enter your choice (r for Rock, p for Paper, s for Scissors, q to quit): ");
        scanf(" %c", &player_choice);

        if (player_choice == 'q') {
            printf("Thanks for playing! Goodbye!\n");
            break;
        }

        if (player_choice != 'r' && player_choice != 'p' && player_choice != 's') {
            printf("Invalid choice! Please choose 'r', 'p', or 's'.\n");
            continue;
        }

        computer_choice = get_computer_choice();
        printf("You chose: %c\n", player_choice);
        printf("Computer chose: %c\n", computer_choice);

        determine_winner(player_choice, computer_choice, &player_score, &computer_score);
        display_scores(player_score, computer_score);
    }
}

// Function to handle a custom number of rounds
void custom_rounds(int total_rounds) {
    int player_score = 0, computer_score = 0, round = 1;
    char player_choice, computer_choice;

    while (round <= total_rounds) {
        printf("\nRound %d of %d\n", round, total_rounds);
        printf("Enter your choice (r for Rock, p for Paper, s for Scissors): ");
        scanf(" %c", &player_choice);

        if (player_choice != 'r' && player_choice != 'p' && player_choice != 's') {
            printf("Invalid choice! Please choose 'r', 'p', or 's'.\n");
            continue;
        }

        computer_choice = get_computer_choice();
        printf("You chose: %c\n", player_choice);
        printf("Computer chose: %c\n", computer_choice);

        determine_winner(player_choice, computer_choice, &player_score, &computer_score);
        display_scores(player_score, computer_score);

        round++;
    }

    printf("\nFinal Scores: \n");
    display_scores(player_score, computer_score);
    if (player_score > computer_score) {
        printf("You win!\n");
    } else if (player_score < computer_score) {
        printf("Computer wins!\n");
    } else {
        printf("It's a tie!\n");
    }
}

int main() {
    int choice, custom_rounds_input;

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Choose a mode:\n");
    printf("1. Best of 10\n");
    printf("2. Infinite\n");
    printf("3. Custom rounds\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            best_of_ten();
            break;
        case 2:
            infinite_mode();
            break;
        case 3:
            printf("Enter the number of rounds you'd like to play: ");
            scanf("%d", &custom_rounds_input);
            custom_rounds(custom_rounds_input);
            break;
        default:
            printf("Invalid choice! Please restart the game and choose a valid option.\n");
    }

    return 0;
}
