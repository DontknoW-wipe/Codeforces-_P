#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		ll res=0;
		for(int i=1;i<n;i++)
		{
			res=max(res,a[i-1]*a[i]);
		}
		cout<<res<<endl;
	}
	return 0;
}