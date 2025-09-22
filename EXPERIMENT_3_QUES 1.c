#include <stdio.h>

int main() {
    int a, b, c;

    // Get input from user
    printf("Enter side a: ");
    scanf("%d", &a);
    printf("Enter side b: ");
    scanf("%d", &b);
    printf("Enter side c: ");
    scanf("%d", &c);

    // Check if sides are positive
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid: Sides must be positive numbers.\n");
        return 1;
    }

    // Find the largest side
    int max_side = a;
    if (b > max_side) max_side = b;
    if (c > max_side) max_side = c;

    // Check triangle inequality (sum of other two > largest)
    if (a + b + c - max_side <= max_side) {
        printf("Invalid triangle: Does not form a triangle.\n");
        return 1;
    }

    // Valid triangle
    printf("Valid triangle.\n");

    // Check type by sides
    int equilateral = (a == b && b == c);
    int isosceles = (a == b || b == c || a == c) && !equilateral;
    int scalene = !equilateral && !isosceles;

    // Check if right-angled (check all 3 ways)
    int right_angled = (a*a + b*b == c*c) ||
                       (a*a + c*c == b*b) ||
                       (b*b + c*c == a*a);

    // Print classification
    if (right_angled) {
        if (isosceles) {
            printf("Isosceles right-angled triangle.\n");
        } else {
            printf("Scalene right-angled triangle.\n");
        }
    } else {
        if (equilateral) {
            printf("Equilateral triangle.\n");
        } else if (isosceles) {
            printf("Isosceles triangle.\n");
        } else {
            printf("Scalene triangle.\n");
        }
    }

    return 0;
}