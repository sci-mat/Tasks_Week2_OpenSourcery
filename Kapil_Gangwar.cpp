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


#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x){
    if(x < 0 ||(x%10 == 0 && x !=0)){
        return false;
    }

    int reversedHalf = 0;
    while(x > reversedHalf){
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }

    return x== reversedHalf || x == reversedHalf/10;
}

int main(){
    int x1 = 1221;
    int x2 = 100;

    cout<< isPalindrome (x1) <<endl; 
    cout<< isPalindrome (x2) <<endl;

    return 0; 
    
}