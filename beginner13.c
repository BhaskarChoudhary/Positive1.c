#include <iostream>
using namespace std;
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
std::cout<<"yes";
else
std::cout<<"no";
}
int main()
{
int i,f;
std::cin>>f;
A a;
a.prime(f);
return 0;
}

