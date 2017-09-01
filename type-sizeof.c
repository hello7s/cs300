/*
    Types Sizeof Example
    CS-300 Secure Coding
    Dr. Jason M. Pittman
    Fall 2017
    Compile: gcc type-sizeof.c -o type-sizeof
*/
#include <stdio.h>

int main()
{
    printf("char is: %d\n", sizeof(char));
    printf("int is: %d\n", sizeof(int));
    printf("long is: %d\n", sizeof(long));
    printf("float is: %d\n", sizeof(float));
    printf("double is: %d\n", sizeof(double));

    int a = 100;
    printf("%d\n", sizeof(a));

    return 0;
}
