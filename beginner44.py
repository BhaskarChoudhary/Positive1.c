a=input()
count=0
for i in a:
    if((i >= chr(58) and i <= chr(64)) or (i >= chr(33) and i <= chr(47))):
        count+=1
    else:
        continue

print (count)  
