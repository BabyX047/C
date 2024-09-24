#include <stdio.h>

// Function to convert decimal to binary
void decimal_to_binary(int num) {
    int binary[32];  // Array to store binary digits
    int i = 0;
    
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Function to convert decimal to octal
void decimal_to_octal(int num) {
    int octal[32];
    int i = 0;
    
    while (num > 0) {
        octal[i] = num % 8;
        num = num / 8;
        i++;
    }

    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

// Function to convert decimal to hexadecimal
void decimal_to_hexadecimal(int num) {
    char hex[32];
    int i = 0;
    
    while (num > 0) {
        int remainder = num % 16;
        if (remainder < 10)
            hex[i] = remainder + '0';
        else
            hex[i] = remainder - 10 + 'A';
        num = num / 16;
        i++;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

// Main function
int main() {
    int num, choice;
    
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Choose the conversion type:\n");
    printf("1. Binary\n");
    printf("2. Octal\n");
    printf("3. Hexadecimal\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            decimal_to_binary(num);
            break;
        case 2:
            decimal_to_octal(num);
            break;
        case 3:
            decimal_to_hexadecimal(num);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
