


#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int user_input;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &user_input);

    // Check if the input is non-negative
    if (user_input < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(user_input);
        printf("The factorial of %d is: %d\n", user_input, result);
    }

    return 0;
}
