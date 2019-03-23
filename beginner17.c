#include<stdio.h>
int main()
{
int n,temp,sum=0,d,r;
scanf("%d",&n);
temp=n;
while(n>0)
{
	r=n%10;
	d=r*r*r;
	sum=sum+d;
	n=n/10;
}
if(temp==sum)
printf("yes");
else
printf("no");
return 0;
}
