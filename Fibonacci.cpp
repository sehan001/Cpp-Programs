#include<bits/stdc++.h>
using namespace std;
void fib(int n)
{
    int n1=0,n2=1;
    int nextn;
    for(int i=1;i<=n;i++)
    {
        cout<<n1<<"\n";
        nextn=n1+n2;
        n1=n2;
        n2=nextn;
    }
    return ;
}
int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}

/*Second Method*/
#include<bits/stdc++.h>
using namespace std;
int fib(int a)
{
    if(a==0 || a==1)
    {
        return a;
    }
    return fib(a-1)+fib(a-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}
