weight = int(input("Enter the weight of the watermelon: "))
if can_divide_watermelon(weight):
    print("YES, the watermelon can be divided into two even parts.")
else:
    print("NO, the watermelon cannot be divided into two even parts.")

w=int(input())
if x%5==0:
    print(x//5)
else:
    print(x//5+1)

def is_buzz_number(num):

    return num % 7 == 0 or str(num).endswith('7')

try:
    number = int(input("Enter a number: "))
    if is_buzz_number(number):
        print(f"{number} is a Buzz number.")
    else:
        print(f"{number} is not a Buzz number.")
except ValueError:
    print("Please enter a valid integer.")