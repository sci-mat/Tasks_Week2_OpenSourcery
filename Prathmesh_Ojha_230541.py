def checkPalindrome(num: int) -> bool:
    req = str(num)
    if num < 0:
        return req[1:] == req[1:][::-1]  # For handling negative numbers
    return req == req[::-1]

# For handling non-integer values
try:
    x = int(input("Enter an integer value: ")) 
    print(checkPalindrome(x))

except ValueError:
    print("Please enter a valid integer!")
