#include <stdio.h>

void print_nibbles(int num) {
    // Calculate the high and low nibbles
    int high_nibble = (num >> 4) & 0xF;
    int low_nibble = num & 0xF;
    
    // Print the nibbles
    printf("H nibble = %d\n", high_nibble);
    printf("L nibble = %d\n", low_nibble);
}

int main() {
    int num;

    // Get input from the user
    printf("Enter a number smaller than 256: ");
    scanf("%d", &num); // Use %hhd for signed 8-bit integer input

    // Print the nibbles
    print_nibbles(num);

    return 0;
}