//
// Created by NAMAN TOMAR on 22-09-2025.
//
#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input weight and height
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display BMI value
    printf("Your BMI is: %.2f\n", bmi);

    // Determine BMI category
    if (bmi < 15.0) {
        printf("Category: Starvation\n");
    } else if (bmi >= 15.1 && bmi <= 17.5) {
        printf("Category: Anorexic\n");
    } else if (bmi >= 17.6 && bmi <= 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.6 && bmi <= 24.9) {
        printf("Category: Ideal\n");
    } else if (bmi >= 25.0 && bmi <= 25.9) {
        printf("Category: Overweight\n");
    } else if (bmi >= 30.0 && bmi <= 39.9) {
        printf("Category: Obese\n");
    } else if (bmi >= 40.0) {
        printf("Category: Morbidly Obese\n");
    } else {
        printf("Category: Undefined\n");
    }

    return 0;
}