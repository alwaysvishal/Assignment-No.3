// Vishal Gupta
// ROLL NO 2303510100108

#include <stdio.h>

int main()
{
    int num, i = 1, factorial = 1;

    printf("Enter any positive number : ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Error: Factorial of negative numbers is not defined.\n");
        return 1;
    }

    while (i <= num)
    {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d = %d\n", num, factorial);

    return 0;
}
