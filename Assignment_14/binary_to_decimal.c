#include <stdio.h>

// binary decimal converter
int main() {
    long long binary_num;
    int decimal_val = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary_num);

    long long temp = binary_num;
    while (temp != 0) {
        remainder = temp % 10;
        decimal_val += remainder * base;
        base *= 2;
        temp /= 10;
    }

    printf("Decimal equivalent = %d\n", decimal_val);

    // positional value calculation
    return 0;
}
// made by abhinav
