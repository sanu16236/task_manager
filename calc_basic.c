#include <stdio.h>

int main(void) {
    int num1, num2;
    char op;

    printf("Enter first integer: ");
    if (scanf("%d", &num1) != 1) {
        printf("Error: Invalid input! Please enter a valid integer.\n");
        return 1;
    }

    printf("Enter second integer: ");
    if (scanf("%d", &num2) != 1) {
        printf("Error: Invalid input! Please enter a valid integer.\n");
        return 1;
    }

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // space avoids newline issues

    switch (op) {
        case '+':
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero!\n");
            } else {
                printf("Result: %d / %d = %d\n", num1, num2, num1 / num2);
            }
            break;

        case '%':
            if (num2 == 0) {
                printf("Error: Modulus by zero!\n");
            } else {
                printf("Result: %d %% %d = %d\n", num1, num2, num1 % num2);
            }
            break;

        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}
