def is_palindrome(x):
    num = str(x)
    rev_num = num[::-1]
    return num == rev_num

result = is_palindrome(input("Enter a number: "))
print(result)