#include <stdio.h>

int is_palindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) {
        return 0; // false
    }

    int original = x; // Store the original number
    int reversed = 0; // Variable to store the reversed number

    // Reverse the integer
    while (x > 0) {
        int digit = x % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        x /= 10; // Remove the last digit
    }

    // Check if the original and reversed numbers are the same
    return original == reversed; // Return 1 for true, 0 for false
}

int main() {
    int x;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &x);

    // Check and print the result
    if (is_palindrome(x)) {
        printf("Output: true\n");
    } else {
        printf("Output: false\n");
    }

    return 0;
}