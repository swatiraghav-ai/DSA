
'''
n= int(input("enter number :"))
i=1
while (i<=10):
    print (n , "X", i ,"=", n*i )
    i +=1
    
    # print odd number from 1 to 100

i= 1

while(i<100):
        if(i %2 != 0):
            i+=1
            continue 
        print (i)
        i+=1
        
word = "artificial intelligence"
count =0
for i in word:
    if(i=="i"):
        count +=1
        print (count)
        
word ="artificial"
count =0
for i in word:
    if(i=="a" or i=="i" or i=="o" or i=="u" or i=="e"):
        count +=1
print (count)  
'''
n = int (input ("enter number :"))
sum=0
for  i in range(1,n+1):
    
    sum +=i    
print (sum)