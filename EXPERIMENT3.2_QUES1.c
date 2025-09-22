//
// Created by NAMAN TOMAR on 22-09-2025.
//
#include <stdio.h>

int main()
{
    int num;
    int positive = 0, negative = 0, zero = 0;
    char choice;

    do {
        // Input a number
        printf("Enter a number: ");
        scanf("%d", &num);

        // Classify the number
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;

        // Ask user if they want to continue
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c to consume newline

    } while (choice == 'y' || choice == 'Y');

    // Display results
    printf("\nSummary:\n");
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);

    return 0;
}