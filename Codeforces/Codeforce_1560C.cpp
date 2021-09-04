#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	ll k ;
	cin >> k ;
	ll d = sqrt( k ) ;
	if ( k == d * d )
	{
		cout << d << " " << 1 << endl ;
	}
	else{
		ll f = ( d + 1 ) * ( d + 1 ) ;
		if( k >=  ( f - d) )
		{
			cout << d + 1 << " " <<  f - k + 1 << endl;
		}
		else {
			cout<< k - ( d * d ) << " " << d + 1 << endl ;
		}
	}
}
int main()
{
  speed_karo
  int t ; cin >> t ;
  while( t-- )
  {
    solve() ;
  }
  return 0 ;
}