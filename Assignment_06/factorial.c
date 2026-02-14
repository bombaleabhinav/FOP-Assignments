#include <stdio.h>

// iterative and recursive
long long factorialIterative(int n) {
    long long result = 1;
    int i;
    for (i = 1; i <= n; i++)
        result *= i;
    return result;
}

long long factorialRecursive(int n) {
    if (n <= 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    printf("Factorial (Iterative): %lld\n", factorialIterative(number));
    printf("Factorial (Recursive): %lld\n", factorialRecursive(number));

    // factorial computation methods
    return 0;
}
// made by abhinav
