def validate_password(password: str) -> bool:
    if len(password) < 8:
        print("Password must be at least 8 characters long.")
        return False

    has_lower = False
    has_upper = False
    has_digit = False
    has_special = False

    special_characters = "!@#$%^&*(),.?\":{}|<>"

    for ch in password:
        if ch.islower():
            has_lower = True
        elif ch.isupper():
            has_upper = True
        elif ch.isdigit():
            has_digit = True
        elif ch in special_characters:
            has_special = True

    if not has_lower:
        print("Password must include at least one lowercase letter.")
        return False
    if not has_upper:
        print("Password must include at least one uppercase letter.")
        return False
    if not has_digit:
        print("Password must include at least one digit.")
        return False
    if not has_special:
        print("Password must include at least one special character.")
        return False
    return True
pwd = input("Enter a password: ")
if validate_password(pwd):
    print(" Password is valid!")
else:
    print(" Password is invalid!")
