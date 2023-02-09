#include<bits/stdc++.h>
using namespace std;
int linearsearch(int a[ ],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    int key;
    cin>>key;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<linearsearch(a,n,key);
    return 0;
}
