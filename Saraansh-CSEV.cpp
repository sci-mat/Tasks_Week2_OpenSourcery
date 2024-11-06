#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversed = 0;
    int original = x;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    return x == reversed || x == reversed / 10;
}

int main() {
    cout << boolalpha; // Print true/false instead of 1/0 for booleans
    cout << "Is 121 a palindrome? " << isPalindrome(121) << endl;  // Output: true
    cout << "Is 10 a palindrome? " << isPalindrome(10) << endl;    // Output: false
    return 0;
}
