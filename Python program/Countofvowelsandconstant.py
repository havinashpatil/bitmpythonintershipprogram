s=input()
ca=0
cd=0
for char in s:
    if char.isalpha():
        ca+=1
    if char.isdigit():
        cd+=1
print(ca,cd)