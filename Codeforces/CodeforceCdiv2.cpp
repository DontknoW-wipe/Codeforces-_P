#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n,m;
	cin>>n>>m;
	set<int> set1;
	map<int,set<int> > mp;
	for(int i=1;i<=n;i++)
	{
		set1.insert(i);
	}
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		mp[min(u,v)].insert(max(u,v));
		if(set1.find(min(u,v))!=set1.end())
		{
			set1.erase(min(u,v));
		}

	}
	int q;
	cin>>q;
	while(q--)
	{
		int x,u,v;
		cin>>x;
		if(x==1)
		{
			cin>>u>>v;
			mp[min(u,v)].insert(max(u,v));
			if(set1.find(min(u,v))!=set1.end())
			{
				set1.erase(min(u,v));
			}
		}
		else if(x==2)
		{
			cin>>u>>v;
			mp[min(u,v)].insert(max(u,v));
			mp[min(u,v)].erase(max(u,v));
			if(mp[min(u,v)].size()==0)
			{
				set1.insert(min(u,v));
			}
		}
		else{
			cout<<set1.size()<<endl;
		}
	}
  
}
int main()
{
  speed_karo
  solve();
  
  return 0;
}