n=int(input())
a=[int(x) for x in input().split()]
f=len(a)
l=list(a)
count=0
e=0
b=[]
for i in range(0,f):
    for j in range(i+1,f):
        if(a[i]==a[j]):
            z=j
            b.append(z)
if(b==[]):
    print("unique")
else:
    s=min(b)
    print(a[s])
            
    
            
