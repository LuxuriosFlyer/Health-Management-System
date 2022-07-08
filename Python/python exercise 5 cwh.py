def getDate():
           import datetime
           return datetime.datetime.now()

Name=int(input("For whom do you want to access the database - (1.Harry, 2.Rohan, 3.Hammad): "))
Action=int(input("Do you want to log or retrieve (1.Log, 2.Retrieve): "))

if(Name==1):
    if(Action==1):
        Field=int(input("What do you want to log (1.Diet, 2. Exercise): "))
        if(Field==1):
            Diet=input("What did Harry eat: ")
            f=open("HarryDiet.txt","a")
            f.write("["+str(getDate())+"]"+ " "+Diet+"\n")
            f.close()
            print("Successfully Stored")
        
        if(Field==2):
            Ex=input("What exercise did Harry do: ")
            f=open("HarryExercise.txt","a")
            f.write("["+str(getDate())+"]"+ " "+Ex+"\n")
            f.close()
            print("Successfully Stored")

    if(Action==2):
        Field=int(input("What do you want to retrieve (1.Diet, 2. Exercise): "))
        if(Field==2):
            f=open("HarryExercise.txt")
            for i in f:
                print(i,end='')
            f.close()

        if(Field==1):
            f=open("HarryDiet.txt")
            for i in f:
                print(i,end='')
            f.close()

if(Name==2):
    if(Action==1):
        Field=int(input("What do you want to log (1.Diet, 2. Exercise): "))
        if(Field==1):
            Diet=input("What did Rohan eat: ")
            f=open("RohanDiet.txt","a")
            f.write("["+str(getDate())+"]"+ " "+Diet+"\n")
            f.close()
            print("Successfully Stored")
        
        if(Field==2):
            Ex=input("What exercise did Rohan do: ")
            f=open("RohanExercise.txt","a")
            f.write("["+str(getDate())+"]"+ " "+Ex+"\n")
            f.close()
            print("Successfully Stored")

    if(Action==2):
        Field=int(input("What do you want to retrieve (1.Diet, 2. Exercise): "))
        if(Field==2):
            f=open("RohanExercise.txt")
            for i in f:
                print(i,end='')
            f.close()

        if(Field==1):
            f=open("RohanDiet.txt")
            for i in f:
                print(i,end='')
            f.close()
    

if(Name==3):
    if(Action==1):
        Field=int(input("What do you want to log (1.Diet, 2. Exercise): "))
        if(Field==1):
            Diet=input("What did Hammad eat: ")
            f=open("HammadDiet.txt","a")
            f.write("["+str(getDate())+"]"+ " "+Diet+"\n")
            f.close()
            print("Successfully Stored")
        
        if(Field==2):
            Ex=input("What exercise did Hammad do: ")
            f=open("HammadExercise.txt","a")
            f.write("["+str(getDate())+"]"+ " "+Ex+"\n")
            f.close()
            print("Successfully Stored")

    if(Action==2):
        Field=int(input("What do you want to retrieve (1.Diet, 2. Exercise): "))
        if(Field==2):
            f=open("HammadExercise.txt")
            for i in f:
                print(i,end='')
            f.close()

        if(Field==1):
            f=open("HammadDiet.txt")
            for i in f:
                print(i,end='')
            f.close()
    