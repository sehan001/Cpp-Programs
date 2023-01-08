#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a,res=0;
    cin>>a;
    int c=a;
    while(a>0)
    {
        int b=a%10;
        res=res+pow(b,3);
        a=a/10;
    }
    if(res==c)
    {
        cout<<"armstrong number";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
