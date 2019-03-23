#include <iostream>
//hello
using namespace std;
class A
{
int i;
public:
void cal(int n,int q);
};
void A::cal(int n,int q)
{
for(i=n+1;i<q;i++)
{
if(i%2==0)
std::cout<<i;
}
}

int main() {
int n,q;
cin>>n;
cin>>q;
A a;
a.cal(n,q);
return 0;
}
