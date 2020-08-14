#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int sum=0,c=0,sm=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(sm>a[i])
		{
			sm=a[i];
		}
		c=c+a[i];
		if(c<0)
		{
			c=0;
		}
		sum=max(c,sum);
	}
	if(sum==0)
	{
		cout<<sm<<endl;
	}
	else
	{
		cout<<sum<<endl;
	}
}
