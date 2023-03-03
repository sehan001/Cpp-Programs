#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p,max=INT_MIN;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        if(a[i]>a[i+1])
        {
            max=a[i];
        }
        else
        {
            max=a[i+1];
        }
    }
    cout<<max;
    return 0;
}
