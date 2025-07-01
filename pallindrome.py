def is_palindrome(s):
    # Remove spaces and convert to lowercase
    s = ''.join(s.split()).lower()
    return s == s[::-1]

# Example usage:
text = input("Enter a string: ")
if is_palindrome(text):
    print("It is a palindrome.")
else:
    print("It is not a palindrome.")

