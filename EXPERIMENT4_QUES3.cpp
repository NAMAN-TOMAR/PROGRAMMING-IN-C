//
// Created by NAMAN TOMAR on 22-09-2025.
//
#include <stdio.h>

int main() {
    {
        int blockVar = 100;
        printf("Inside block: blockVar = %d\n", blockVar);
    }

    // printf("Outside block: blockVar = %d\n", blockVar); // ❌ Error: blockVar not accessible here

    return 0;
}