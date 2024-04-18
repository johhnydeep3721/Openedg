#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // ptr points to the first element of arr

    printf("Original pointer value: %p\n", ptr);

    // Adding an integer value to ptr
    int offset = 2;
    ptr = ptr + offset;

    printf("New pointer value after adding %d: %p\n", offset, ptr);

    return 0;
}