n=int(input())
a=[int(x) for x in input().split()]
f=len(a)
l=list(a)
count=0
e=0
for i in range(0,f):
    for j in range(i+1,f):
        if(a[i]==a[j]):
            z=j
            l.append(z)
s=min(l)
print(a[s])
            
    
            
