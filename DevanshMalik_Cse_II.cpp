/*

Solve the below mentioned task and push the code to your branch, 

Do Not the push the code to your branch

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
#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,mod;
    cout<<"Enter any Integer:"<<endl;
    cin>>num;
    int original=num;
    while(num!=0)
    {
        mod=num%10;
        rev=rev*10+mod;
        num=num/10;
    }
    if(original==rev)
    {
        cout<<"It is a PALINDROME number";
    }
    else
    {
        cout<<"It is NOT a PALINDROME number";
    }
    return 0;
}