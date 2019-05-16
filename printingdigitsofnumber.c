#include <stdio.h>

int main(void) {
	int n,r,rev=0,s;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	while(rev>0)
	{
		s=rev%10;
		printf("%d ",s);
		rev=rev/10;
	}
	return 0;
}
