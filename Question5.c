// Vishal Gupta
// ROLL NO 2303510100108

#include <stdio.h>

int main() {
    int num, i;

    printf("Enter any positive number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        r
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
           
        }
    }

    printf("%d is a prime number.\n", num);

    return 0;
}
