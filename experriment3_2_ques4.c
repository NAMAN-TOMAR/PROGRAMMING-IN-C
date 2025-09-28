//
// Created by NAMAN TOMAR on 28-09-2025.
//#include <stdio.h>

int main() {
    float population = 100000;        // Initial population
    float rate = 0.10;                 // Growth rate (10%)

    printf("Year\tPopulation\n");
    printf("---------------------\n");

    // Loop for 10 years
    for (int year = 1; year <= 10; year++) {
        population = population + (population * rate);  // Increase by 10%
        printf("%d\t%.0f\n", year, population);         // Display year and population
    }

    return 0;
}
