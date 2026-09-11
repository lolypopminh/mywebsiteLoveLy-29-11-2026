def bigOrSmall(a,b):
    if a<b:
        small = a
        big = b
    else:
        small =b
        big = a
        
    return big,small
    
def toEvenNum(a):
    if a % 2 == 1:
        c = a+1
    else:
        c = a
        
    return c

if __name__ == "__main__":
    a = int(input("Enter number a: "))
    b = int(input("Enter number b: "))
    big,small = bigOrSmall(a,b)
    small = toEvenNum(small)
    
    Sum = 0
    while small <= big:
        Sum += small
        small += 2
        
    print(a,b,Sum)