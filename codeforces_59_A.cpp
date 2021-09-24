/*
	
	https://codeforces.com/problemset/problem/59/A

  A. Word

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);
string convertUpper(string s)
{
  for(int i=0;i<s.size();i++)
  {
    if(s[i]>='a'&&s[i]<='z')
    {
      s[i]-=32;
    }
  }
  return s;
}
string convertLower(string s)
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
  string s;
  cin>>s;
  int upper=0,lower=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]>='A'&&s[i]<='Z')
    {
      upper++;
    }
    else if(s[i]>='a'&&s[i]<='z')
    {
      lower++;
    }
  }
  if(lower==upper||lower>upper)
  {
    cout<<convertLower(s)<<endl;
  }
  else{
    cout<<convertUpper(s)<<endl;
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