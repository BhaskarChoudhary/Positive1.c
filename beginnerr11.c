#include<stdio.h>
int main()
{
int n,r,r2=1,i;
scanf("%d",&n);
scanf("%d",&r);
for(i=0;i<n;i++)
{
	r2=r2*r;
}
printf("%d",r2);
return 0;
}
    
