#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int res=INT_MIN;
	for(int i=0;i<n-1;i++)
	{
		int j=i+1;
		int k1=(((i+1)*(j+1))-k*(a[i]|a[j]));
		if(k1>res)
		{
			res=k1;
		}
	}
	cout<<res<<endl;
}
int main()
{
	speed_karo
	int t;cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}