x = int(input("Enter a number: "))
def is_palindrome(x):
    rev = 0
    orig = x
    while x > 0:
        rev = rev * 10 + x % 10
        x //= 10
    return orig == rev

print(is_palindrome(x))
