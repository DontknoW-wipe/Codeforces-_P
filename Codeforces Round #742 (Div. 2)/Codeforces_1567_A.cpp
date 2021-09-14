/*

	Codeforces 

	https://codeforces.com/contest/1567/problem/A

	A. Domino Disaster

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='U')
		{
			s[i]='D';
		}
		else if(s[i]=='D')
		{
			s[i]='U';
		}
	}
	cout<<s<<endl;
}
int main()
{
  SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB
  int t=1;cin>>t;
  while(t--)
  {
  	solve();
  }
  return 0;
}