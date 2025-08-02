#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;          // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num = num / 10;                // Remove the last digit
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}