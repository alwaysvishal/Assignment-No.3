// Vishal Gupta
// ROLL NO 2303510100108

#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter any positive number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
