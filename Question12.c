// Vishal Gupta
// 2303510100108

#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter two positive number here: ");
    scanf("%d %d", &num1, &num2);

    if (num2 > num1)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    while (num2 != 0)
    {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    printf("The GCD of the two numbers is: %d\n", num1);

    return 0;
}
