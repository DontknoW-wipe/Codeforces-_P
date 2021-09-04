#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int res=0;
	for(int i=0;i<n;i++)
	{
		if(s2[i]=='1')
		{
			if(s1[i]=='0')
			{
				res++;
				s1[i]='2';
			}
			else if(s1[i]=='1'||s1[i]=='2')
			{
				if(i-1>=0&&s1[i-1]=='1')
				{
					s1[i-1]='2';
					res++;
				}
				else if(i+1<n&&s1[i+1]=='1')
				{
					s1[i+1]='2';
					res++;
				}
			}
		}
		// cout<<s1<<" "<<s2<<endl;
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