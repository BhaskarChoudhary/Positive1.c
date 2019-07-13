a,b=input().split()
count=0
a=list(a)
b=list(b)
f=len(a)
for i in range(0,f):
    if(a[i]!=b[i]):
        count+=1
if(count==1):
    print("yes")
else:
    print("no")
