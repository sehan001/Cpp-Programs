#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	-+cin.ignore();
	char a[n+1];
	cin.getline(a,n+1);
	//cin.ignore();
	int curmax=0,resmax=0;
	for(int i=0;i<n+1;i++)
	{
		if(a[i]==' ' || a[i]=='\0')
		{
			if(curmax>resmax)
			{
				resmax=curmax;
			}
			curmax=0;
		}
		else
		{
			curmax++;
		}
		if(a[i]=='\0')
		{
			break;
		}
	}
	cout<<resmax;
	return 0;
}
