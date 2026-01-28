#include <stdio.h>

// multiplication table generator
int main() {
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Multiplication Table of %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    // loop based computation
    return 0;
}
// made by abhinav
