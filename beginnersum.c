#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	for(i=0;i<2;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<2;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
