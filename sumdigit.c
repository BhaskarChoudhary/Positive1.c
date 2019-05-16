#include <stdio.h>
//bhaskar
int main(void) {
	// your code goes here
	int n,sum=0,r;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("%d",sum);
}
