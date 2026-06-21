'''
def average(a,b,c):
    average = (a+b+c)/3
    return average
print(average(34,34,32))


def factorial (n):
    fact =1
    for i in range (1,n+1):
        fact *= i

    return fact
print(factorial(5))

def even(a,b):
    for i in range(a,b):
        if(i%2==0):
            print(i)
even(1,100)

def digit(n):
    for i in range(n):
     print(i%10)
    
digit(1234)
'''
def digitcount(n):
    count =0
    for i in range(n):
        if(i%10==0):
            count+=1
            i=i//10
    return count
print(digitcount(12345))