// Vishal Gupta
// 2303510100108

#include <stdio.h>

int main()
{
    int i, n, sumEven = 0, sumOdd = 0;

    printf("Enter any positive number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += i;
        }
        else
        {
            sumOdd += i;
        }
    }

    printf("Sum of all even numbers between 1 to %d = %d\n", n, sumEven);
    printf("Sum of all odd numbers between 1 to %d = %d\n", n, sumOdd);

    return 0;
}

        printf("Wrong entry");
    }
    return 0;
}
