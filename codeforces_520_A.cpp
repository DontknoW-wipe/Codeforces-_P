/*
	
	https://codeforces.com/problemset/problem/520/A

  A. Pangram

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);
 
void solve()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int a[26]={0};
  for(int i=0;i<n;i++)
  {
    if(s[i]>='A'&&s[i]<='Z')
    {
      a[s[i]-'A']++;
    }
    else{
      a[s[i]-'a']++;
    }
  }
  for(int i=0;i<26;i++)
  {
    // cout<<a[i]<<" ";
    if(a[i]==0)
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