#include <stdio.h>
int main() {

    char name[50];  
    
    printf("Hello World \n");

    printf("My name is Computer. What is Yours? \n");
    scanf("%s", name);

    printf("\nWelcome to C, %s! Have fun coding.\n", name);

    return 0;
}
