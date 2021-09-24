/*
	
	https://codeforces.com/problemset/problem/266/B

  B. Queue at the School

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);
 
void solve()
{
  int n,t;
  cin>>n>>t;
  string s;
  cin>>s;
  while(t--)
  {
      for(int i=0;i<n-1;i++)
      {
        if(s[i]=='B'&&s[i+1]=='G')
        {
          char y=s[i];
          s[i]=s[i+1];
          s[i+1]=y;
          i++;
        }
      }
  }
  cout<<s<<endl;
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