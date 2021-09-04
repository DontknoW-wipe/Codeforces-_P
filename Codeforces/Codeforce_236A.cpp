#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	string s;
	cin>>s;
	int a[26]={0};
	for(int i=0;i<s.size();i++)
	{
		a[s[i]-'a']++;
	}	
	int res=0;
	for(int i=0;i<26;i++)
	{
		if(a[i]>0)
		{
			res++;
		}
	}
	if(res%2==0)
	{
		cout<<"CHAT WITH HER!"<<endl; 
	}
	else{
		cout<<"IGNORE HIM!"<<endl;
	}
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