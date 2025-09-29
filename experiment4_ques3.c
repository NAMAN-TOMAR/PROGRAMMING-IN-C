//
// Created by NAMAN TOMAR on 28-09-2025.
////
// Created by NAMAN TOMAR on 22-09-2025.
//
#include <stdio.h>

int main() {
    int x = 10; // Declared in main block
    printf("In main block: x = %d\n", x);

    {
        int y = 20; // Declared in inner block
        printf("In inner block: x = %d\n", x); // Accessible
        printf("In inner block: y = %d\n", y); // Accessible
    }

    // printf("Outside inner block: y = %d\n", y); // ❌ Error: y is not accessible here

    {
        int z = 30; // Declared in another inner block
        printf("In second inner block: z = %d\n", z); // Accessible
    }

    // printf("Outside second inner block: z = %d\n", z); // ❌ Error: z is not accessible here

    return 0;
}
