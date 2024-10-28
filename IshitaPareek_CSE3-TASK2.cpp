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
    // Negative numbers and numbers ending in 0 (but not 0 itself) cannot be palindromes
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    
    int reversed = 0;
    int original = x;
    
    while (x > 0) {
        int lastDigit = x % 10;
        reversed = reversed * 10 + lastDigit;
        x /= 10;
    }
    
    return original == reversed;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (isPalindrome(x)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
