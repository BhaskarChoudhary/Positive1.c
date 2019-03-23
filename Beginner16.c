#include<stdio.h>
int main()
{
int i,j,count=0;
int n,q;
scanf("%d",&n);
scanf("%d",&q);
 for(i=n+1; i<q; i++)
    {
	count=0;
	for(j=1; j<q; j++)
	{
	    if(i%j==0)
		count++;
	}
	if(count==2)
	{
	printf("%d\n",i);
	}
    }
return 0;
}
