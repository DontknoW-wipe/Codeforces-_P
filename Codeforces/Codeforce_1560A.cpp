#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int k;
	cin>>k;
	int j=0,res=0,v=1;
	while(j<k)
	{
		if(v%3!=&&v%10!=3)
		{
			res=v;
			j++;
		}
		v++;
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