def computePay(hours,rate):
    if hours<=40:
        print (rate*hours)
    else:
        print ((rate*40)+((rate*1.5)*(hours-40)))
hours=int(input())
rate=int(input())

computePay(hours,rate)