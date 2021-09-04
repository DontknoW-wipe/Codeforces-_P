#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n;
	cin>>n;
	string s;
	int x=0;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s=="X++"||s=="++X")
		{
			x++;
		}
		else{
			x--;
		}
	}
	cout<<x<<endl;
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