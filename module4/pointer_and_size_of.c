#include <stdio.h>

int main(void) {
    char charVar;
    short shortVar;
    int intVar;
    long longVar;
    long long longLongVar;
    float floatVar;
    double doubleVar;
    char *charPtr;
    char **charPtrPtr;

    printf("Explain\n");
    printf("%d byte for chars\n", sizeof(char));
    printf("%d byte for char variables\n", sizeof(charVar));
    printf("%d bytes for shorts\n", sizeof(short));
    printf("%d bytes for short variables\n", sizeof(shortVar));
    printf("%d bytes for ints\n", sizeof(int));
    printf("%d bytes for int variables\n", sizeof(intVar));
    printf("%d bytes for longs\n", sizeof(long));
    printf("%d bytes for long variables\n", sizeof(longVar));
    printf("%d bytes for long longs\n", sizeof(long long));
    printf("%d bytes for long long variables\n", sizeof(longLongVar));
    printf("%d bytes for floats\n", sizeof(float));
    printf("%d bytes for float variables\n", sizeof(floatVar));
    printf("%d bytes for doubles\n", sizeof(double));
    printf("%d bytes for double variables\n", sizeof(doubleVar));
    printf("%d bytes for pointers\n", sizeof(char *));
    printf("%d bytes for pointer variables\n", sizeof(charPtr));
    printf("%d bytes for address of char variable\n", sizeof(&charVar));
    printf("%d bytes for pointer to char variable\n", sizeof(charPtr));
    printf("%d byte for value stored by pointer to char variable\n", sizeof(*charPtr));

    return 0;
}