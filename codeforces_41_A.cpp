/*
	
	https://codeforces.com/problemset/problem/41/A

  A. Translation

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);
 
void solve()
{
  string s,t;
  cin>>s;
  cin>>t;
  for(int i=0,j=s.size()-1;i<s.size()&&j>=0;i++,j--)
  {
    if(s[i]!=t[j])
    {
      cout<<"NO"<<endl;
      return;
    }
  }
  cout<<"YES"<<endl;
}
int main()
{
  SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB
  int t=1;//cin>>t;
  while(t--)
  {
  	solve();
  }
  return 0;
}