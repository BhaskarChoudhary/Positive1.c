#include<stdio.h>
int main()
{
int n,r,count=0;
scanf("%d",&n);
while(n>0)
{
    r=n%10;
    count=count+1;
    n=n/10;
}
printf("%d",count);
return 0;
}
