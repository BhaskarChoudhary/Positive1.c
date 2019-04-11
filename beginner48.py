a=[] 
for i in input().split():
    a.append(i)
a.sort(key=int)
print(a[-1])
