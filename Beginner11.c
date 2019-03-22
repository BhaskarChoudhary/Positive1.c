#include<stdio.h>
int main()
{
int n,r,r1=1,i;
scanf("%d",&n);
scanf("%d",&r);
for(i=0;i<n;i++)
{
	r1=r1*r;
}
printf("%d",r1);
return 0;
}
    
