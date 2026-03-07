#include <stdio.h>

// armstrong number checker
int main() {
    int number, original, remainder, result = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        remainder = number % 10;
        result += remainder * remainder * remainder;
        number /= 10;
    }

    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    // digit cube summation
    return 0;
}
// made by abhinav
