print("Enter hours:")
inp1=int(input())
print("Enter rate:")
inp2=int(input())
print("Pay:", end=' ')
if inp1<=40:
    print(inp1*inp2)
else:
    print((40*inp2)+(inp1-40)*(1.5*inp2))