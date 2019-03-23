#include <iostream.h>
#include<conio.h>
//using namespace std;
class A
{
int i,count;
public:
void prime(int n);
};
void A::prime(int n)
{
count=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
cout<<"yes";
else
cout<<"no";
}
void main()
{
int i,f;
clrscr();
cin>>f;
A a;
a.prime(f);
getch();
}

