/*
	
	https://codeforces.com/problemset/problem/112/A

  A. Petya and Strings

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);
string convertToLower(string s)
{
  for(int i=0;i<s.size();i++)
  {
    if(s[i]>='A'&&s[i]<='Z')
    {
      s[i]+=32;
    }
  }
  return s;
}
void solve()
{
  string s1,s2;
  cin>>s1;
  cin>>s2;
  s1=convertToLower(s1);
  s2=convertToLower(s2);
  
  if(s1==s2)
  {
    cout<<0<<endl;
  }
  else if(s1<s2)
  {
    cout<<-1<<endl;
  }
  else{
    cout<<1<<endl;
  }
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