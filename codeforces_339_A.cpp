/*
	
	https://codeforces.com/problemset/problem/339/A

  A. Helpful Maths

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
  int one=0,two=0,three=0;
  for(int i=0;i<s.size();i+=2)
  {
    if(s[i]=='1')
    {
      one++;
    }
    else if(s[i]=='2')
    {
      two++;
    }
    else if(s[i]=='3')
    {
      three++;
    }
  }
  string res="";
  for(int i=0;i<one;i++)
  {
    if(res.size()==0)
    {
      res+="1";
    }
    else{
      res+="+1";
    }
  }
  for(int i=0;i<two;i++)
  {
    if(res.size()==0)
    {
      res+="2";
    }
    else{
      res+="+2";
    }
  }
  for(int i=0;i<three;i++)
  {
    if(res.size()==0)
    {
      res+="3";
    }
    else{
      res+="+3";
    }
  }
  cout<<res<<endl;
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