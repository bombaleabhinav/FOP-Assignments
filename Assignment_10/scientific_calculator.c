#include <stdio.h>

// scientific calculator program
int main() {
    int choice, i;
    float num1, num2, result;

    printf("Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result = %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result = %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result = %.2f\n", num1 * num2);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero\n");
            break;
        case 5:
            printf("Enter base and exponent: ");
            scanf("%f %f", &num1, &num2);
            result = 1;
            for (i = 0; i < (int)num2; i++)
                result *= num1;
            printf("Result = %.2f\n", result);
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%f", &num1);
            if ((int)num1 < 0) {
                printf("Factorial not defined for negatives\n");
            } else {
                long long fact = 1;
                for (i = 1; i <= (int)num1; i++)
                    fact *= i;
                printf("Result = %lld\n", fact);
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    // power and factorial
    return 0;
}
// made by abhinav
