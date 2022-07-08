from asyncio.constants import SSL_HANDSHAKE_TIMEOUT
import random

cntC=0
cntP=0
i=1
objects=['s','w','g']
while(i<=10):
    print(f"Round {i}:\n")

    pChoice=input("What do you choose:\ns for snake\nw for water\ng for gun\n")

    aiChoice=random.choice(objects)

    if(aiChoice=='s' and pChoice=='w'):
        cntC+=1

    elif(aiChoice=='s' and pChoice=='g'):
        cntP+=1

    elif(aiChoice=='w' and pChoice=='s'):
        cntP+=1

    elif(aiChoice=='w' and pChoice=='g'):
        cntC+=1
    
    elif(aiChoice=='g' and pChoice=='s'):
        cntC+=1

    elif(aiChoice=='g' and pChoice=='w'):
        cntP+=1
    
    else:
        i+=1
        continue
    i+=1

if(cntC>cntP):
    print(f"AI: {cntC} Player: {cntP}\nAI WINS!")

elif(cntC<cntP):
    print(f"AI: {cntC} Player: {cntP}\nPLAYER WINS!")

else:
    print("IT'S A TIE!")