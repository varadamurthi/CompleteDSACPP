n = int(input("Enter the number: "))
count = 1

""" 
1 2 3
4 5 6
7 8 9  
"""

for i in range(n):
    for j in range(n):
        print(count,end = " ")
        count = count +1

    print()



""" i = 1

while(i<=n):
    j = 1
    while(j<=n):
        print(count,end=" ")
        count = count+1
        j = j+1
    print()
    i = i+1 """