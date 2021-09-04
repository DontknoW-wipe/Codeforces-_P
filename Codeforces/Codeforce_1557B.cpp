#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n,k;
	cin>>n>>k;
	int a[n],temp[n];
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		temp[i]=a[i];
	}
	sort(temp,temp+n);
	for(int i=0;i<n;i++)
	{
		mp[temp[i]]=i;
	}
	int res=0;
	for(int i=0;i<n;i++)
	{
		if(i>0&&mp[a[i]]>0&&temp[mp[a[i]]-1]==a[i-1])
		{
			continue;
		}
		else{
			res++;
		}
	}
	if(res<=k)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
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