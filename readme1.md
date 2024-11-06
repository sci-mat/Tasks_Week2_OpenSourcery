# Palindrome Number Checker

This repository contains a solution to check if a given integer is a palindrome. A palindrome is a number that reads the same backward as forward. The solution is implemented in C++.

---

## Problem Statement

Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

### Examples
- **Example 1**
  - **Input**: `x = 121`
  - **Output**: `true`
  - **Explanation**: 121 reads the same from left to right and right to left.

- **Example 2**
  - **Input**: `x = 10`
  - **Output**: `false`
  - **Explanation**: 10 reads as 01 from right to left, so it is not a palindrome.

---

## Instructions, Approach, Solution, and Code

```bash
# Instructions:

# 1. Clone the repository to your local device
git clone <repository_url>

# 2. Create a branch with your name
git branch <your_name>

# 3. Checkout to your branch
git checkout <your_name>

# 4. Rename the file to your name, implement the solution, and save the code

# 5. Add and commit your changes
git add .
git commit -m "Added palindrome solution"

# 6. Push the code to your branch
git push origin <your_name>

# Note: Do not push changes directly to the main branch. Only submit your code on your own branch.

---

# Approach:
# 1. If the number is negative, it is not a palindrome, so return `false`.
# 2. Reverse the integer by extracting digits from the end and appending them to a new integer.
# 3. Compare the reversed integer with the original number. If they match, the number is a palindrome.

---

# Solution Code:
# The code implementation in C++ is shown below.

#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;

    int original = x;
    long reversed = 0;

    while (x != 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

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

---

# How to Run:

# 1. Compile and run the program in your local environment:
g++ palindrome_checker.cpp -o palindrome_checker
./palindrome_checker

# 2. Enter a number to check if it is a palindrome.

---

