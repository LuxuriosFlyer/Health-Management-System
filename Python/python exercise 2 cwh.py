print("Enter the 2 numbers:")
n1=int(input())
n2=int(input())
print("Enter the operation:")
op=input()
if (op=="add"):
    ans=n1+n2
elif (op=="sub"):
    ans=n1-n2
elif (op=="mul"):
    ans=n1*n2
elif (op=="div"):
    ans=n1/n2
if n1==56 and n2==9 and op=="add":
    ans=77
elif n1==45 and n2==3 and op=="mul":
    ans=555
elif n1==56 and n2==4 and op=="div":
    ans=4
print("The answer is ")
print(ans)
