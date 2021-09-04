#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	string s;
	cin>>s;
	int size=s.size();
	string res="";
	for(int i=0;i<size;i++)
	{
		if(s[i]!='a'&&s[i]!='i'&&s[i]!='e'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'&&s[i]!='A'&&s[i]!='I'&&s[i]!='E'&&s[i]!='O'&&s[i]!='U'&&s[i]!='Y')
		{
			if(s[i]>='A'&&s[i]<='Z')
			{
				s[i]=s[i]+32;
			}
			res+='.';
			res+=s[i];
		}
	}
	cout<<res<<endl;
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