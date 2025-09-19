s=input()
s1=""
for char in s:
    if char.isspace():
        s1+="-"
    else:
        s1+=char
print(s1)