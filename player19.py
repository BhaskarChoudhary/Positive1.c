a=int(input())
l=[]
b=[]
for i in range(2,a):
    if(a%i==0):
        l.append(i)
if(l==[]):
    print(a)
for i in l:
    count=0
    for j in range(2,i):
        if(i==2):
            b.append(2)
            continue
        elif(i%j==0):
            count=count+1
    if(count==0):
        b.append(i)
for i in b:
    print(i,end=" ")
