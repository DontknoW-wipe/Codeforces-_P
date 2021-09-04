#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	string s;
	cin>>s;
	int size=s.size();
	if(size>10)
	{
		cout<<s[0]<<size-2<<s[size-1]<<endl;
	}
	else{
		cout<<s<<endl;
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