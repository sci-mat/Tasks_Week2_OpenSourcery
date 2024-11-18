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
class Solution {
public:
    bool isPalindrome(int x) {
        int orginalNum = x;
        int long long reverseNum = 0;
        while(orginalNum > 0)
        {
            int digit = orginalNum%10;
            reverseNum = 10*reverseNum + digit;
            orginalNum = orginalNum/10;
        }
        return reverseNum == x;
    }
};
int main()
{
    Solution prob;
    cout<<prob.isPalindrome(121)<<endl;
    cout<<prob.isPalindrome(10)<<endl;
}