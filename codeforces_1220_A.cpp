/*
	
	https://codeforces.com/problemset/problem/1220/A

  A. Cards

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);
 
void solve()
{
  int n1;
  cin>>n1;
  string s;
  cin>>s;
  int o=0,n=0,e=0,z=0,r=0;
  for(int i=0;i<n1;i++)
  {
    if(s[i]=='o')
    {
      o++;
    }
    else if(s[i]=='n')
    {
      n++;
    }
    else if(s[i]=='e')
    {
      e++;
    }
    else if(s[i]=='z')
    {
      z++;
    }
    else if(s[i]=='r')
    {
      r++;
    }
  }
  int one=min(n,e);
  one=min(one,o);
  n=n-one;
  e=e-one;
  o=o-one;
  int zero=min(z,e);
  zero=min(zero,r);
  zero=min(zero,o);
  while(one>0)
  {
    cout<<1<<" ";
    one--;
  }
  while(zero>0)
  {
    cout<<0<<" ";
    zero--;
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