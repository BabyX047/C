#include <stdio.h>

int main() {

    char name[50];  
    int age;
    
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
    } else if (age >= 15 && age <= 30) {
        printf("You could learn any other programming language.\n");
    } else {
        printf("Please enter a valid age.\n");
    }

    return 0;
}
