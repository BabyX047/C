#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    printf("Octal: %o\n", num);  // Use %o format specifier for octal
}

// Function to convert decimal to hexadecimal
void decimal_to_hexadecimal(int num) {
    printf("Hexadecimal: %X\n", num);  // Use %X format specifier for hexadecimal
}

// Function to convert binary to decimal
int binary_to_decimal(const char *binary) {
    int num = 0;
    for (int i = 0; binary[i] != '\0'; i++) {
        num = num * 2 + (binary[i] - '0');
    }
    return num;
}

// Function to convert octal to decimal
int octal_to_decimal(const char *octal) {
    return strtol(octal, NULL, 8);  // Convert octal string to decimal using base 8
}

// Function to convert hexadecimal to decimal
int hexadecimal_to_decimal(const char *hex) {
    return strtol(hex, NULL, 16);  // Convert hex string to decimal using base 16
}

int main() {
    char input[50];
    int decimal_value = 0;
    int choice;

    printf("Enter a number (decimal, binary [0b...], octal [0...], or hexadecimal [0x...]): ");
    scanf("%s", input);

    // Detecting the input type
    if (strncmp(input, "0b", 2) == 0 || strncmp(input, "0B", 2) == 0) {
        // Binary input
        decimal_value = binary_to_decimal(input + 2);  // Skip the "0b" prefix
        printf("Detected as Binary, Decimal value: %d\n", decimal_value);
    } else if (input[0] == '0' && (input[1] != 'x' && input[1] != 'X') && strlen(input) > 1) {
        // Octal input
        decimal_value = octal_to_decimal(input);
        printf("Detected as Octal, Decimal value: %d\n", decimal_value);
    } else if (strncmp(input, "0x", 2) == 0 || strncmp(input, "0X", 2) == 0) {
        // Hexadecimal input
        decimal_value = hexadecimal_to_decimal(input + 2);  // Skip the "0x" prefix
        printf("Detected as Hexadecimal, Decimal value: %d\n", decimal_value);
    } else {
        // Decimal input
        decimal_value = atoi(input);
        printf("Detected as Decimal, Decimal value: %d\n", decimal_value);
    }

    // Offering conversion choices
    printf("\nChoose the conversion type:\n");
    printf("1. Binary\n");
    printf("2. Octal\n");
    printf("3. Hexadecimal\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            decimal_to_binary(decimal_value);
            break;
        case 2:
            decimal_to_octal(decimal_value);
            break;
        case 3:
            decimal_to_hexadecimal(decimal_value);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

