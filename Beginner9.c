#include<stdio.h>
int main()
{
int n,i,k,a[10],sum=0;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<=n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<=k;i++)
{
	sum=sum+i;
}
printf("%d",sum);
return 0;
}
