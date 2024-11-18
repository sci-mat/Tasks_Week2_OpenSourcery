

#Solve the below mentioned task and push the code to your branch, 

#Do Not the push the code to the main branch

#You can change the file and complete the task in any language

#Given an integer x, return true if x is a palindrome, and false otherwise.

#Example 1:

#Input: x = 121
#Output: true
#Explanation: 121 reads as 121 from left to right and from right to left.
#Example 2:

#Input: x = 10
#Output: false
#Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

def is_palindrome(x: int) -> bool:
    # Convert number to string and compare it to its reverse
    return str(x) == str(x)[::-1]

# Example usage
x = 121
print(is_palindrome(x))  # Output should be True for 121
