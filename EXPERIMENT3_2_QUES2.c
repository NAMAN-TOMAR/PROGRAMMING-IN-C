//
// Created by NAMAN TOMAR on 22-09-2025.
//
#include <stdio.h>

int main() {
    int num;

    // Input the number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    // Print multiplication table from 1 to 10
    printf("\nMultiplication Table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}