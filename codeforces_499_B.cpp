/*
	
	https://codeforces.com/problemset/problem/499/B

  B. Lecture

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);
 
void solve()
{
  int n,m;
  cin>>n>>m;
  map<string,string> v_p;
  for(int i=0;i<m;i++)
  {
    string s1,s2;
    cin>>s1>>s2;
    v_p[s1]=s2;
  }
  string g,f;
  for(int i=0;i<n;i++)
  {
    cin>>g;
    f=v_p[g];
    if(g.size()<=f.size())
    {
      cout<<g<<" ";
    }
    else{
      cout<<f<<" ";
    }
  }
  cout<<endl;


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