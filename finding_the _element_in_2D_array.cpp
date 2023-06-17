#include<bits/stdc++.h>
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
    int target;
    cin>>target;
    int r=0,c=n-1;
    bool found=false;
    while(r<m && c>=0)
    {
        if(a[r][c]==target)
        {
            found=true;
           break;
        }
       if(a[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if(found)
    {
        cout<<r+1<<c+1;
    }
    else
    {
        cout<<"not found";
    }
    return 0;
}
