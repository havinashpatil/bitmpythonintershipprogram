def is_palindrome(text: str) -> bool:
   
    cleaned = ''.join(text.lower().split())
    
    return cleaned == cleaned[::-1]


word = input("Enter a string: ")
if is_palindrome(word):
    print("Palindrome")
else:
    print("Not a palindrome")
