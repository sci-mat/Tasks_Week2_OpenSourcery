#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) return false;

    int original = x;
    long reversed = 0;

    // Reverse the number
    while (x != 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    // Check if the original number is equal to the reversed number
    return original == reversed;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if(isPalindrome(x)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
