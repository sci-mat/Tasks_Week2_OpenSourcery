/*

Solve the below mentioned task and push the code to your branch, 

Do Not the push the code to the main branch

You can change the file and complete the task in any language

Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


*/
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) {
        return false;
    }

    // Store the original number to compare later
    int original = x;
    int reversed = 0;

    // Reverse the number
    while (x > 0) {
        int digit = x % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        x /= 10; // Remove the last digit from x
    }

    // Check if the original number is equal to the reversed number
    return original == reversed;
}

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    if (isPalindrome(x)) {
        cout << x << " is a palindrome." << endl;
    } else {
        cout << x << " is not a palindrome." << endl;
    }

    return 0;
}
