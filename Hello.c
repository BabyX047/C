#include <stdio.h>
int main() {

    char name[50];  
    int age;
    
    printf("Hello World \n");

    printf("My name is Computer. What is Yours? \n");
    scanf("%s", name);

    printf("\nWelcome to C, %s! Have fun coding.\n", name);

    printf("How old are you, %s?", name);
    scanf("%d", age);

    if (0 > age > 14) {
        printf("You could learn Scratch");
    }else {
        printf("you can learn any other language");
    }

    return 0;
}
