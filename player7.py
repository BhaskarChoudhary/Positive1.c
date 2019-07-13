a=input()
l=[]
d=[]
p=[]
for i in a:
    l.append(ord(i))
f=len(l)
i=0
while(i<f):
    t=l[i]
    l[i]=l[i+1]
    l[i+1]=t
    d.append(l[i])
    d.append(l[i+1])
    i=i+2

for i in d:
    p.append(chr(i))

res=str("".join(p))
print(res)
    
    
