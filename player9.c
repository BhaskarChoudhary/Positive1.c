#include<stdio.h>
int main()
{
int i,j,l,r,count=0,countnew=0;
scanf("%d %d",&l,&r);
for(i=l;i<=r;i++)
{
 for(j=1;j<=i;j++)
 {
  if(i%j==0)
  {
  count++;
  }
 }
 if(count==2)
 {
 countnew++;
 }
 count=0;
}
printf("%d",countnew);
return 0;
}
