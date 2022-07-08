n=3
i=9
cnt=0
print("You have 9 guesses left")
while (i>0):
    inp=int(input())
    if inp==n:
        print("Congrats you have found the right answer. You took",end=' ')
        print(cnt ,end=" ")
        print("guesses.")
    elif inp>n and i>0:
        print("Go a bit lower")
        i-=1
        cnt+=1
        print("You have" ,end=" ")
        print (i, end=" ")
        print ("chances left")
    elif inp<n and i>0:
        print("Go a bit higher")
        i-=1
        cnt+=1
        print("You have" ,end=" ")
        print (i ,end=" ")
        print ("chances left")
print("Game over.")


