n=int(input())
a=[int(x) for x in input().split()]
f=len(a)
l=[]
for i in range(0,f):
    if(i%2==0) and (a[i]%2!=0):
        l.append(a[i])
    elif(i%2!=0) and (a[i]%2==0):
        l.append(a[i])
for i in l:
    print(i,end=" ")
