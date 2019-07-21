from collections import Counter
n=int(input())
a=input().split()
l=[]
for i in a:
    l.append(i)
   # res="".join(i)
   # l.append(res)
for i in l:
    f=l.count(i)
    if(f==1):
        print(i)
        break
    
    
