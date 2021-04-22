#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
 	int n;
 	cin>>n;
 	int a[n];
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
 	}
 	for(int i=0;i<n;i++)
 	{
 		if(a[i]%2!=0)
 		{
 			cout<<a[i]<<" ";
 		}
 	}
 	for(int i=0;i<n;i++)
 	{
 		if(a[i]%2==0)
 		{
 			cout<<a[i]<<" ";
 		}
 	}
 	cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
