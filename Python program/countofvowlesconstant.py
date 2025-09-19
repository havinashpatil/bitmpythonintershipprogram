s=input()
c=0
v="aei0uAEIOU"
for char in s:
    if char not in v:
        c+=1
print(c)