n=int(input())
string=input()
vowels=['a','e','i','o','u'] 
for x in vowels: 
    string = string.replace(x, "") 
string=string[::-1]
print(string)
