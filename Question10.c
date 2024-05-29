// Vishal Gupta
// 2303510100108

#include <stdio.h>

int main()
{
    int a, b, result = 1;

    printf("Enter the base number: ");
    scanf("%d", &a);

    printf("Enter the exponent number: ");
    scanf("%d", &b);

    for (int i = 1; i <= b; i++)
    {
        result *= a;
    }

    printf("%d to the power of %d is %d\n", a, b, result);

    return 0;
}
