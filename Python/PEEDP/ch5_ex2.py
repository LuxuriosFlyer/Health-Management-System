
max=-99999999999999
min=99999999999999
while(True):
    num=input("Enter a number: ")
    if (num=="done"):
        print("Max element:",max,"Min element:",min,end=' ')
        break
    try:
        num=int(num)
        if(num>max):
            max=num
        if(num<min):
            min=num
    except:
        print("Invalid Input")
