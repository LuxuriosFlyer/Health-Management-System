def getDate():
           import datetime
           return datetime.datetime.now()

from os.path import exists

Enter=int(input("Would you like to:\n1.Sign in\n2.Create new account\n"))

if(Enter==1):
    oldName=input("Please enter your name: ")

    if(exists(oldName+" Diet.txt")==False):
        print("Account does not exist, please try again.")
        exit()
    
    if(exists(oldName+" Exercise.txt")==False):
        print("Account does not exist, please try again.")
        exit()
    
elif(Enter==2):
    newName=input("Please enter your name: ")

    if(exists(newName+" Diet.txt")==True):
        print("Account already exists, please try again.")
        exit()
    
    if(exists(newName+" Exercise.txt")==True):
        print("Account already exists, please try again.")
        exit()

else:
    print("Please choose a valid option and try again.")
    exit()

Action=int(input("Do you want to log or retrieve (1.Log, 2.Retrieve): "))

if(Action!=1 and Action!=2):
    print("Please choose a valid option and try again.")
    exit()

if(Enter==1):
    if(Action==1):
        Field=int(input("What do you want to log (1.Diet, 2. Exercise): "))
        if(Field==1):
            Diet=input("What did you eat: ")
            f=open(oldName+" Diet.txt","a")
            f.write("["+str(getDate())+"]"+ " "+Diet+"\n")
            f.close()
            print("Successfully Stored")
        
        elif(Field==2):
            Ex=input("What exercise did you do: ")
            f=open(oldName+" Exercise.txt","a")
            f.write("["+str(getDate())+"]"+ " "+Ex+"\n")
            f.close()
            print("Successfully Stored")

        else:
            print("Please choose a valid option and try again.")
            exit()

    elif(Action==2):
        Field=int(input("What do you want to retrieve (1.Diet, 2. Exercise): "))
        if(Field==2):
            f=open(oldName+" Exercise.txt")
            for i in f:
                print(i,end='')
            f.close()

        elif(Field==1):
            f=open(oldName+" Diet.txt")
            for i in f:
                print(i,end='')
            f.close()

        else:
            print("Please choose a valid option and try again.")
            exit()

    else:
        print("Please choose a valid option and try again.")
        exit()

elif(Enter==2):
    if(Action==1):
        Field=int(input("What do you want to log (1.Diet, 2. Exercise): "))
        if(Field==1):
            Diet=input("What did you eat: ")
            f=open(newName+" Diet.txt","w")
            f.write("["+str(getDate())+"]"+ " "+Diet+"\n")
            f.close()
            print("Successfully Stored")
        
        elif(Field==2):
            Ex=input("What exercise did you do: ")
            f=open(newName+" Exercise.txt","w")
            f.write("["+str(getDate())+"]"+ " "+Ex+"\n")
            f.close()
            print("Successfully Stored")

        else:
            print("Please choose a valid option and try again.")
            exit()

    elif(Action==2):
        Field=int(input("What do you want to retrieve (1.Diet, 2. Exercise): "))
        if(Field==2):
            f=open(newName+" Exercise.txt")
            for i in f:
                print(i,end='')
            f.close()

        elif(Field==1):
            f=open(newName+" Diet.txt")
            for i in f:
                print(i,end='')
            f.close()

        else:
            print("Please choose a valid option and try again.")
            exit()

    else:
        print("Please choose a valid option and try again.")
        exit()