n=int(input())
a=[int(x) for x in input().split()]
a=list(a)
for i in a:
    if(a.count(i)==1):
        print(i)
