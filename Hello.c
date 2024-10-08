#include <stdio.h>
#include <string.h>  // Needed for strcmp function

int main() {

    char name[50];  
    int age;
    char yorn[3];  // To store "Y" or "N"
    char chosen_language[20];  // To store the selected language
    const char *languages[] = {"C", "Python", "Java", "Javascript"};
    int continue_learning = 1;  // Control variable for while loop

    printf("Hello World \n");

    printf("My name is Computer. What is Yours? \n");
    scanf("%s", name);

    printf("\nWelcome to C, %s! Have fun coding.\n", name);

    printf("How old are you, %s? ", name);
    scanf("%d", &age);

    if (age < 6) {
        printf("Please enter a valid age. You should be at least 6 years old.\n");
    } else if (age >= 6 && age <= 14) {
        printf("You could learn Scratch.\n");
        printf("Do you want to begin right away? Y/N: ");
        scanf("%s", yorn);

        if (strcmp(yorn, "Y") == 0 || strcmp(yorn, "y") == 0) {
            printf("Great, we'll get right to it!\n");
        } else if (strcmp(yorn, "N") == 0 || strcmp(yorn, "n") == 0) {
            printf("No worries, we can begin when you are ready.\n");
        } else {
            printf("Please enter a valid option.\n");
        }
    } else if (age >= 15 && age <= 30) {
        while (continue_learning) {
            printf("\nYou could learn any other programming language.\n \nSome options include: C, Python, Java, and Javascript.\n");
            printf("\nWhich of these would you like to begin with? \n");
            scanf("%s", chosen_language);

            if (strcmp(chosen_language, "C") == 0 || strcmp(chosen_language, "c") == 0) {
                printf("C is a great choice. We'll begin right away!\n");
            } else if (strcmp(chosen_language, "Python") == 0 || strcmp(chosen_language, "python") == 0) {
                printf("Python is a fantastic choice for beginners.\n");
            } else if (strcmp(chosen_language, "Java") == 0 || strcmp(chosen_language, "java") == 0) {
                printf("Java is a powerful language for building various types of applications.\n");
            } else if (strcmp(chosen_language, "Javascript") == 0 || strcmp(chosen_language, "javascript") == 0) {
                printf("Javascript is essential for web development.\n");
            } else {
                printf("That's not an option we currently support. Please choose from C, Python, Java, or Javascript.\n");
            }

            // Ask if they want to learn another language
            printf("\nWould you want to learn another language in future? Y/N: ");
            scanf("%s", yorn);

            if (strcmp(yorn, "N") == 0 || strcmp(yorn, "n") == 0) {
                continue_learning = 0;  // Exit the loop if the user says no
                printf("Thank you for learning with us! Happy coding!\n");
            }
        }
    } else {
        printf("Please enter a valid age.\n");
    }

    return 0;
}
