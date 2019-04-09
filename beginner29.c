#include<stdio.h>
int len(int n)
{
int count = 0;
while(n != 0)
    {
	// n = n/10
	n /= 10;
	++count;
    }

    return count;
}
int main()
{
int a,b,c,n,s;
scanf("%d",&n);
s=len(n);
if(s>1)
{
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n;
printf("%d %d%d",c,b,a);
}
else
{
printf("0 %d",n);
}
return 0;
}
