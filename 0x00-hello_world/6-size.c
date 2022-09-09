#include<stdio.h>

int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;
    long int longintType;
    long long longlongintType;

    // sizeof evaluates the size of a variable
    printf("Size of a char: %zu bytes\n", sizeof(charType));
    printf("Size of an int: %zu bytes\n", sizeof(intType));
    printf("Size of a long int: %zu bytes\n", sizeof(longintType));
    printf("Size of a long long int: %zu byte\n", sizeof(longlongintType));
    printf("Size of a float: %zu byte\n", sizeof(floatType));

    return (0);
}
