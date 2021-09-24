/*
	
	https://codeforces.com/problemset/problem/110/A

  A. Nearly Lucky Number

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);
 
void solve()
{
  string s;
  cin>>s;
  int res=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='7'||s[i]=='4')
    {
      res++;
    }
  }
  if(res==0)
  {
    cout<<"NO"<<endl;
    return;
  }
  while(res>0)
  {
    int y=res%10;
    if(y!=7&&y!=4)
    {
      cout<<"NO"<<endl;
      return;
    }
    res/=10;
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