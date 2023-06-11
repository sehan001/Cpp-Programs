#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int rs=0,re=m-1,cs=0,ce=n-1;
    while(rs<=re && cs<=ce)
    {
        for(int col=cs;col<=ce;col++)
        {
            cout<<a[rs][col]<<" ";
        }
        cout<<"\n";
        rs++;
        for(int row=rs;row<=re;row++)
        {
            cout<<a[row][ce]<<" ";
        }
        cout<<"\n";
        ce--;
        for(int col=ce;col>=cs;col--)
        {
            cout<<a[re][col]<<" ";
        }
        cout<<"\n";
        re--;
        for(int row=re;row>=rs;row--)
        {
            cout<<a[row][cs]<<" ";
        }
        cout<<"\n";
        cs++;
    }
    return 0;
}
