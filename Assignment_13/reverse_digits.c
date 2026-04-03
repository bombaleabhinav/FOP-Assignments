#include <stdio.h>

// digit reversal program
int main() {
    int number, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("-");
        number = -number;
    }

    if (number == 0) {
        printf("Digits in reverse order: 0\n");
        return 0;
    }

    printf("Digits in reverse order: ");
    while (number != 0) {
        remainder = number % 10;
        printf("%d ", remainder);
        number /= 10;
    }
    printf("\n");

    // modulo extraction loop
    return 0;
}
// made by abhinav
