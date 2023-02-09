#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    int b[a];
    for(i=0;i<a;i++)
    {
        cin>>b[i];
    }
    int mxno=b[0];
    int mnno=b[1];
    if(mnno>mxno)
    {
        mxno=mnno;
        mnno=mxno;
    }
    for(i=0;i<a;i++)
    {
        if(mxno<b[i])
        {
            mxno=b[i];
        }
        if(mnno>b[i])
        {
            mnno=b[i];
        }
    }
    cout<<mxno<<"\n"<<mnno;
    return 0;
}
