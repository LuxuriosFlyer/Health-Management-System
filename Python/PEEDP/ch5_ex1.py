sum=0
count= 0
while(True):
    num=input("Enter a number: ")
    if(num=="done"):
        print(sum, count, sum/count, end='')
        break
    try:
        num=int(num)
        sum+=num
        count+=1
    except:
        print("Invalid Input")
    
