a=input()
x=0
n=0
for i in a:
    if(i.isalpha()):
        x+=1
    elif(i.isnumeric()):
        n+=1


    
if(x>0 and n>0):
    print("Yes")
else:
    print("No")
    
