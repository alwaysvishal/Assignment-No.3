// Vishal Gupta
// ROLL NO 2303510100108

#include <stdio.h>

int main()
{
    float num1, num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("Result: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("Result: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("Result: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("Result: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Error: Invalid operator. Please enter +, -, * or /\n");
        break;
    }

    return 0;
}
