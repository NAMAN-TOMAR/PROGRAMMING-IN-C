//
// Created by NAMAN TOMAR on 28-09-2025.
////
// Created by NAMAN TOMAR on 22-09-2025.
//
#include <stdio.h>

void counter() {
    static int count = 0;  // Static local variable
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}