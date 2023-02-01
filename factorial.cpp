#include<bits/stdc++.h>
using namespace std;
int fac(int n)
{
    int re=1;
    for(int i=2;i<=n;i++)
    {
        re=re*i;
    }
    return re;
}
int main()
{
    int n;
    cin>>n;
    cout<<fac(n);
    return 0;
}