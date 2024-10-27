#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

void decimalToBinary(int decimal) {
    // Array to store binary representation
    int binary[32];

    // Variable to keep track of the binary array index
    int index = 0;

    // Handle the case when the decimal number is 0
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }

    // Convert decimal to binary
    while (decimal > 0) {
        // Store the remainder (0 or 1) in the binary array
        binary[index] = decimal % 2;
        // Divide the decimal by 2
        decimal = decimal / 2;
        // Move to the next index in the binary array
        index++;
    }

    // Display the binary representation in reverse order
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    printf("\n");
}

int main() {
    int decimalNumber;

    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Call the function to convert and display the binary representation
    decimalToBinary(decimalNumber);

    return 0;
}
