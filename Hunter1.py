from collections import Counter
a=[int(x) for x in input().split()]
z=Counter(a)
l=[]
b=[]
for i in z.elements():
    l.append(i)
for i in l:
    if(l.count(i)>1):
        f=l.count(i)
        b.append(i)
b = list(dict.fromkeys(b))
for i in b:
    print(i,end=" ")
