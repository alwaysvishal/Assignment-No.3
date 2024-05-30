// Vishal Gupta
// Roll no. 2303510100108

#include <stdio.h>

int main()
{
    int num, var, rem, sum = 0, a = 0, temp, p;

    printf("Enter any number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        temp = temp / 10;
        ++a;
    }

    temp = num;

    while (temp > 0)
    {
        rem = temp % 10;
        p = 1;
        for (int i = 1; i <= a; i++)
            p *= rem;
        sum += p;
        temp = temp / 10;
    }

    if (sum == num)
    {
        printf("%d is an Armstrong number\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number\n", num);
    }
    return 0;
}
