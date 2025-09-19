# # s="avinashpatil"
# # result=s.title()
# # print(result)
#without using title method
s=input()
words=s.split()
res=""
for word in words:
    cap=word[0].upper()+word[1:]
    res=res+" "+cap
print(res)
