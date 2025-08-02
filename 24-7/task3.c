


#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    float base, height, length, width, radius;

    printf("Menu:\n");
    printf("1. Calculate area of triangle\n");
    printf("2. Calculate area of rectangle\n");
    printf("3. Calculate area of circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter base of triangle: ");
        scanf("%f", &base);
        printf("Enter height of triangle: ");
        scanf("%f", &height);
        printf("Area of triangle = %.2f\n", 0.5 * base * height);
    } else if (choice == 2) {
        printf("Enter length of rectangle: ");
        scanf("%f", &length);
        printf("Enter width of rectangle: ");
        scanf("%f", &width);
        printf("Area of rectangle = %.2f\n", length * width);
    } else if (choice == 3) {
        printf("Enter radius of circle: ");
        scanf("%f", &radius);
        printf("Area of circle = %.2f\n", PI * radius * radius);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

