from collections import Counter
a=input()
f=len(a)
b=[]
l=[]
z=Counter(a)
for i in z.elements():
    b.append(i)
print(b)
f=len(b)
for i in range(0,f):
    count=1
    for j in range(i+1,f):
        if(b[i]==b[j]):
            count=count+1
            continue
    if(count>1):
        l.append(count)
        i=count+1
    else:
        l.append(1)
print(l)
e=len(l)
for i in range(0,e):
    if(l[i]==max(l)):
        print(b[i])
    


        
    
