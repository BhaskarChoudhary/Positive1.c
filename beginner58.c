#include<stdio.h>
int main()
{
 int i,r,rev=0,n,temp;
 scanf("%d",&n);
 temp=n;
 while(n>0)
 {
 	r=n%10;
 	rev=(rev*10)+r;
 	n=n/10;
 }
 printf("%d",rev);
 return 0;
}
