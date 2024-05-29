// Vishal Gupta
// ROLL NO 2303510100108

#include <stdio.h>

int main()
{
    printf(" Here is the size of different data types in bytes:\n");

    printf("char: %zu bytes\n", sizeof(char));
    printf("unsigned char: %zu bytes\n", sizeof(unsigned char));

    printf("int: %zu bytes\n", sizeof(int));
    printf("unsigned int: %zu bytes\n", sizeof(unsigned int));

    printf("short: %zu bytes\n", sizeof(short));
    printf("unsigned short: %zu bytes\n", sizeof(unsigned short));

    printf("long: %zu bytes\n", sizeof(long));
    printf("unsigned long: %zu bytes\n", sizeof(unsigned long));

    printf("long long: %zu bytes\n", sizeof(long long));
    printf("unsigned long long: %zu bytes\n", sizeof(unsigned long long));

    printf("float: %zu bytes\n", sizeof(float));

    printf("double: %zu bytes\n", sizeof(double));

    printf("long double: %zu bytes\n", sizeof(long double));

    return 0;
}
