/*

	https://codeforces.com/contest/1569/problem/A

	A. Balanced Substring

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n ;
	cin >> n ;
	string s ;
	cin >> s ;
	int l1 = -1, r1= -1 ;
	for ( int l = 1 ; l <= n ; l++ )
	{
		// cout<<l<<" : ";
		for ( int i = 0 ; i < n-l+1 ; i++ )
		{
			string s1 = s.substr( i , l ) ;
			// cout<<s1<<endl;
			int a = 0 , b = 0 ;
			for ( int j = 0 ; j < s1.size() ; j++ )
			{
				if( s1[j] == 'a' )
				{
					a++;
				}
				else
				{
					b++;
				}
			}
			if( a == b )
			{

				l1=i+1;
				r1=i+l;
				// cout<<s1<<" "<<i+1<<" "<<i+l<<endl;
			}
		}

	}

	cout << l1 << " " << r1 << endl ;
}
int main()
{
  SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB
  int t = 1 ; cin >> t ;
  while ( t-- )
  {
  	solve() ;
  }
  return 0 ;
}