def is_palindrome(x):
    num = str(x)
    rev_num = num[::-1]
    return num == rev_num

print(is_palindrome(input("Enter a number: ")))