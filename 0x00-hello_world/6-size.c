#include<stdio.h>
int main() 
{
    int intType;
    float floatType;
    long int longintType;
    long long int longlongintType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of long int: %zu bytes\n", sizeof(longintType));
    printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    
    return 0;
}

