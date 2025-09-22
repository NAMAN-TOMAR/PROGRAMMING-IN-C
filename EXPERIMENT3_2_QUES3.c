//
// Created by NAMAN TOMAR on 22-09-2025.
//
#include <stdio.h>

int main() {
    int i, j, num = 1;

    for (i = 1; i <= 3; i++) {         // Outer loop for rows
        for (j = 1; j <= i; j++) {     // Inner loop for columns
            printf("%d ", num);        // Print current number
            num++;                     // Increment number
        }
        printf("\n");                  // Newline after each row
    }

    return 0;
}