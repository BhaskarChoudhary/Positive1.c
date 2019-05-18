a=input().split()
f=len(a)
min=a[0]
for i in range(1,f):
    if(min>a[i]):
        min=a[i]
print(min)
