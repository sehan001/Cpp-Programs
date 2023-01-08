#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int rev=0;
    while(a>0)
    {
        int ld=a%10;
        rev=rev*10+ld;
        a=a/10;
    }
    cout<<rev;
    return 0;
}
