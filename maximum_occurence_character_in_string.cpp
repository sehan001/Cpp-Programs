#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    int count=1;
    int maxcount=INT_MIN;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==a[i+1])
        {
            count=count+1;
        }
        if(a[i]!=a[i+1])
        {
            maxcount=count;
            count=1;
        }
    }
    maxcount = max(maxcount, count);
    cout<<maxcount;
    return 0;
}
