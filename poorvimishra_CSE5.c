// Question statement: Given an integer x, return true if x is a palindrome, and false otherwise.

#include<iostream>
using namespace std;

bool isPalindrome(int x){
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    int original = x;
    int reversed = 0;
    // Reverse the entire integer
    while (x > 0){
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    // Compare the reversed number with the original
    return original == reversed;
}
int main() {
    int x = 555;
    cout << (isPalindrome(x) ? "true" : "false") << endl; 

    x = 343;
    cout << (isPalindrome(x) ? "true" : "false") << endl; 

    x = 687;
    cout << (isPalindrome(x) ? "true" : "false") << endl; 

    x = 13;
    cout << (isPalindrome(x) ? "true" : "false") << endl; 

    return 0;
}