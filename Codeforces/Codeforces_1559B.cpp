#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	queue<pair<int,char>> q;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if(s[i]=='B' || s[i]=='R')
		{
			q.push({i,s[i]});
		}
	}
	if(q.empty())
	{
		s[0]='B';
		q.push({0,s[0]});
	}
	while(!q.empty())
	{
		auto it=q.front();
		q.pop();
		if(it.first+1<s.size() && s[it.first+1]=='?')
		{
			if(it.second == 'B')
			{
				s[it.first+1]='R';
				q.push({it.first+1,'R'});
			}
			else{
				s[it.first+1]='B';
				q.push({it.first+1,'B'});	
			}
		}
		if(it.first-1>=0 && s[it.first-1]=='?')
		{
			if(it.second == 'B')
			{
				s[it.first-1]='R';
				q.push({it.first-1,'R'});
			}
			else{
				s[it.first-1]='B';
				q.push({it.first-1,'B'});	
			}	
		}
	}
	cout<<s<<endl;
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