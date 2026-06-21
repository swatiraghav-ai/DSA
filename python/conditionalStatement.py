'''
username = input("enter username")

password = input("enter password")
if(username=="admin" and password =="pass"):
    print("login successfull")
elif (username !="admin"):
    print("wrong username")
elif (password != "pass" and username !="admin"):
    print("wrong password and wrong username")
    
else:
    print("wrong password")
    '''
num = int (input("enter number :"))
if(num % 2==0):
    print("even")
else:
    print("odd")