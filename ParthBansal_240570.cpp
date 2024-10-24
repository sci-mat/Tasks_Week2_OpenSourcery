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
#include<math.h>
using namespace std;
int main(){
    int num;
    cout << "enter a number : ";
    cin >> num;
    int originalnum = num;
    int reversed = 0;
    int i = 0;
    while(num!=0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
        i++;
    }
    cout <<"reversed number is " << reversed << endl;
    if(reversed==originalnum){
        cout << "True";
    }else{
        cout << "False";
    }
}