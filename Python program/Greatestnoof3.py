def find_greatest(a, b, c):
    return max(a, b, c)

try:
    num1 = float(input())
    num2 = float(input())
    num3 = float(input("Enter third number: "))
    
    greatest = find_greatest(num1, num2, num3)
    print(f"The greatest number among {num1}, {num2}, and {num3} is: {greatest}")
    
except ValueError:
    print("Please enter valid numbers!")
