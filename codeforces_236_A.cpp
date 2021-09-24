/*
	
	https://codeforces.com/problemset/problem/236/A

  A. Boy or Girl

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
  int a[26]={0};
  for(int i=0;i<s.size();i++)
  {
    a[s[i]-'a']++;
  }
  int c=0;
  for(int i=0;i<26;i++)
  {
    if(a[i]>0)
    {
      c++;
    }
  }
  if(c%2==0)
  {
    cout<<"CHAT WITH HER!"<<endl;
  }
  else{
    cout<<"IGNORE HIM!"<<endl;
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