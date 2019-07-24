n=int(input())
a=[int(x) for x in input().split()]
a=list(a)
f=len(a)
l=[]
a.sort()
e=max(a[:])
l.append(e)
for i in range(1,f):
    l.append(max(a[:-i]))
count=0
for i in l:
    if(i==0):
        count=count+1
        continue
for i in l:
    if(count==f):
        print(0)
        break
    else:
        print(i,end="")
