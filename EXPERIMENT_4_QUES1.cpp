//
// Created by NAMAN TOMAR on 22-09-2025.
//
#include <stdio.h>

int globalVar = 10;  // Global variable

void display() {
    printf("Inside display(): globalVar = %d\n", globalVar);
}

void modify() {
    globalVar += 5;
    printf("Inside modify(): globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main(): globalVar = %d\n", globalVar);
    display();
    modify();
    printf("After modify(): globalVar = %d\n", globalVar);
    return 0;
}