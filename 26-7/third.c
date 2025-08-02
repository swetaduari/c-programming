#include <stdio.h>

int main() {
    int num, largest = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        if (remainder > largest) {
            largest = remainder;
        }
        num /= 10;
    }

    printf("The largest digit is: %d\n", largest);

    return 0;
}
