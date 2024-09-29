#include <stdio.h>

// Function prototypes
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main() {
    int option;
    float balance = 1000.00;  // Initial balance
    int pin, enteredPin;
    
    printf("Welcome to the ATM Simulator!\n");

    // PIN Authentication
    pin = 1234;  // Set default pin for the demo
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);
    
    if (enteredPin != pin) {
        printf("Incorrect PIN. Exiting...\n");
        return 0;
    }
    
    do {
        printf("\n****** ATM Menu ******\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);
        
        switch (option) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    } while (option != 4);
    
    return 0;
}

// Function to check balance
void checkBalance(float balance) {
    printf("\nYour current balance is: $%.2f\n", balance);
}

// Function to deposit money
float deposit(float balance) {
    float depositAmount;
    printf("\nEnter the amount to deposit: $");
    scanf("%f", &depositAmount);

    if (depositAmount > 0) {
        balance += depositAmount;
        printf("You've successfully deposited $%.2f.\n", depositAmount);
        printf("Your new balance is: $%.2f\n", balance);
    } else {
        printf("Invalid amount. Please enter a valid amount to deposit.\n");
    }

    return balance;
}

// Function to withdraw money
float withdraw(float balance) {
    float withdrawAmount;
    printf("\nEnter the amount to withdraw: $");
    scanf("%f", &withdrawAmount);

    if (withdrawAmount > balance) {
        printf("Insufficient balance! Transaction failed.\n");
    } else if (withdrawAmount > 0) {
        balance -= withdrawAmount;
        printf("You've successfully withdrawn $%.2f.\n", withdrawAmount);
        printf("Your new balance is: $%.2f\n", balance);
    } else {
        printf("Invalid amount. Please enter a valid amount to withdraw.\n");
    }

    return balance;
}
