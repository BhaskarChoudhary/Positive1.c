#include <stdio.h>

int main(void) {
	// your code goes here
	int n,r,count=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r!=0 && r!=1)
		count++;
		n=n/10;
	}
	if(count>0)
	printf("no");
	else 
	printf("yes");
	return 0;
}
