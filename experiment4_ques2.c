//
// Created by NAMAN TOMAR on 28-09-2025.
////
// Created by NAMAN TOMAR on 22-09-2025.
//
#include <stdio.h>

int globalVar = 20;

void testScope() {
    int localVar = 5;
    printf("Inside testScope(): localVar = %d\n", localVar);
    printf("Inside testScope(): globalVar = %d\n", globalVar);
}

int main() {
    testScope();
    // printf("Outside testScope(): localVar = %d\n", localVar); // ❌ Error: localVar not accessible here
    printf("Inside main(): globalVar = %d\n", globalVar);
    return 0;
}