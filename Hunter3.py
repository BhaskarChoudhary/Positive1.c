n=int(input())
a=[int(x) for x in input().split()]
f=len(a)
count=0
l=[]
for i in range(0,f):
    if(i==a[i]):
        l.append(i)
    else:
        count=count+1
l.sort()
if(count==f):
        print(-1)
else:
    for i in l:
        print(i,end=" ")
