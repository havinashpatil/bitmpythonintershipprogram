
def isprime(n):
     for i in range(2,(n//2)+1):
         if n%i==0:
             return False
     return True
l=int(input())
r=int(input())
c=0
for i in range(l,r+1):
     if isprime(i):
         c+=1
print(c)
