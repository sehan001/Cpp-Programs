#include<bits/stdc++.h>
using namespace std;
int fac(int n)
{
    int re=1;
    for(int i=2;i<=n;i++)
    {
        re*=i;
    }
    return re;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int a=fac(n)/(fac(r)*fac(n-r));
    cout<<a;
    return 0;
}