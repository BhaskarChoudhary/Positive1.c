#include <stdio.h>
int main()
{
	int r,n,sum=0,d,i;
	scanf("%d",&n);
	i=1;
	while(n>0)
	{
		r=n%10;
		d=r*r;
		sum=sum+d;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
