
#include <stdio.h>

int main() {
    int n, sum = 0, firstDigit, lastDigit;

    printf("Enter number to find sum of first and last digit: ");
    scanf("%d", &n);

    // Store the original number to extract the last digit
    int original_n = n; 

    // Find last digit of a number
    lastDigit = original_n % 10;

    // Find the first digit by dividing n by 10 until n is a single digit
    while (n >= 10) {
        n = n / 10;
    }
    firstDigit = n;

    // Calculate sum of first and last digit
    sum = firstDigit + lastDigit;

    printf("Sum of first and last digit = %d\n", sum);

    return 0;
}