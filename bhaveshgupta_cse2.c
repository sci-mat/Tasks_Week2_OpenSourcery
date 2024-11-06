/*

Solve the below mentioned task and push the code to your branch, 

Do Not the push the code to the main branch

You can change the file and complete the task in any language

Given an integer x, return true if x is a palindrome, and false otherwise.

*/
#include <stdio.h>
int main(){
     int num;
    printf("enter value to check for palindrome : ");
    scanf("%d",&num);
     int lg,reversed = 0;
    for(int i = num ; i>0 ; i = i/10){

      lg = i % 10;
      reversed = reversed*10 + lg ;
    }

    if(reversed == num){
        printf("yes");
    }
    else printf("no");

    return 0;
}