a=input()
l=[]
for i in a:
    f=ord(i)+3
    if(f>=90):
        f=f-26
        l.append(f)
    else:
        l.append(f)
b=[]        
for i in l:
    b.append(chr(i))
for i in b:
    print(i,end="")
        
