#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]>='A'&&s1[i]<='Z')
		{
			s1[i]+=32;
		}
		if(s2[i]>='A'&&s2[i]<='Z')
		{
			s2[i]+=32;
		}
	}
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]<s2[i])
		{
			cout<<-1<<endl;
			return;
		}
		else if(s1[i]>s2[i])
		{
			cout<<1<<endl;
			return;
		}
	}
	cout<<0<<endl;
}
int main()
{
  speed_karo
  // int t;cin>>t;
  // while(t--)
  // {
    solve();
  // }
  return 0;
}