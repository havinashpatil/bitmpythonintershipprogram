def remove_duplicates_string(s: str) -> str:
    result = ""
    for ch in s:
        if ch not in result:   # add only first occurrence
            result += ch
    return result

# Example:
s= input()
print(remove_duplicates_string(s))

