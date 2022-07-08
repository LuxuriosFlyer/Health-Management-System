n=int(input("Enter a no.: "))
var=int(input("Enter 0 or 1: "))
var=bool(var)
if(var==False):
    while(n>=0):
        i=n
        while(i>0):
            print('*',end='')
            i-=1
        print('\n')
        n-=1

else:
    j=1
    while(j<=n):
        i=1
        while(i<=j):
            print('*',end='')
            i+=1
        print('\n')
        j+=1
