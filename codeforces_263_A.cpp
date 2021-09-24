/*
	
	https://codeforces.com/problemset/problem/263/A

  A. Beautiful Matrix

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
  int a;
  int dex1=-1,dex2=-1;
  for(int i=1;i<=5;i++)
  {
    for(int j=1;j<=5;j++)
    {
      cin>>a;
      if(a==1)
      {
        dex1=i;
        dex2=j;
      }
    }
  }
  cout<<abs(dex1-3)+abs(dex2-3)<<endl;
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