N = int(input("Enter range:"))

i=0
a = 0
b = 1

while i < N:
    if i <= 1:
        Next = i
    else:
        Next = a + b
        a = b
        b = Next
    print(Next)
    i = i + 1
    
