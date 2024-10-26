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

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number");
    scanf("%d", &num);

    int numRev = 0;
    for (int i = num; i > 0; i /= 10){
        numRev = numRev * 10 + (i % 10);
    }
    if(numRev == num){
        printf("%d is a palindrome", num);
    }
    else{
        printf("%d is not a palindrome", num);
    }
    return 0;
}