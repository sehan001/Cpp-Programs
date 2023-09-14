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

    int b[13]={0};
    for(int i=0;i<n;i++)
    {
        b[a[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int c;
        cin>>c;
        cout<<b[c]<<endl;
    }
    return 0;
}
