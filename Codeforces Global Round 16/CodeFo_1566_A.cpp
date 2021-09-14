/*
	https://codeforces.com/contest/1566/problem/A

	A. Median Maximization

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n,s;
	cin>>n>>s;
	if(n==1)
	{
		cout<<s<<endl;
		return;
	}
	if(s==1&&n>1)
	{
		cout<<0<<endl;
		return;
	}
	int res=(s/((n/2)+1));
	cout<<res<<endl;

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