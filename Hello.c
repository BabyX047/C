#include <stdio.h>
#include <string.h>  // Needed for strcmp function

int main() {

    char name[50];  
    int age;
    char yorn[3];  // To store "Y" or "N"
    
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

        // String comparison using strcmp
        if (strcmp(yorn, "Y") == 0 || strcmp(yorn, "y") == 0) {
            printf("Great, we'll get right to it!\n");
        } else if (strcmp(yorn, "N") == 0 || strcmp(yorn, "n") == 0) {
            printf("No worries, we can begin when you are ready.\n");
        } else {
            printf("Please enter a valid option.\n");
        }

        
    } else if (age >= 15 && age <= 30) {
        printf("You could learn any other programming language.\n");
    } else {
        printf("Please enter a valid age.\n");
    }

    return 0;
}
