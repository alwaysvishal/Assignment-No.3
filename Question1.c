// Vishal Gupta
// ROLL NO 2303510100108

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter any number here: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of first %d natural numbers is: %d", n, sum);
    return 0;
}
