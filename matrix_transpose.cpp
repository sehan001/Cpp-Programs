#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int a[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            
            cout<<a[j][i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
