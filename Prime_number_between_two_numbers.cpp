#include <bits/stdc++.h>
#include<math.h>
using namespace std;
bool prime(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(prime(i))
        {
            cout<<i<<"\n";
        }
    }
}
