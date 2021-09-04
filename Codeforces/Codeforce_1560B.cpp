#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	ll a ,b ,c ;
	cin >> a >> b >> c;
	ll total_number = abs( a - b ) * 2;
	ll res = 0 ;
	if(a > total_number or b > total_number or c > total_number)
	{
		res=-1;
	}
	else{
		res = c  + total_number / 2 ;
		if( res > total_number )
		{
			res = c - total_number / 2;
		} 
	}
	cout << res << endl ;
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