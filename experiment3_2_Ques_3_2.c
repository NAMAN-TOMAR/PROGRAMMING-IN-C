//
// Created by NAMAN TOMAR on 28-09-2025.
//
//
// Created by NAMAN TOMAR on 28-09-2025.
//
#include <stdio.h>

int main() {
    int rows = 5;  // You can change this to generate more or fewer rows

    for (int i = 0; i < rows; i++) {
        int value = 1;

        // Print leading spaces for alignment
        for (int space = 1; space < rows - i; space++)
            printf("  ");

        for (int j = 0; j <= i; j++) {
            printf("%4d", value);
            value = value * (i - j) / (j + 1); // Next value in the row
        }

        printf("\n");
    }

    return 0;
}
