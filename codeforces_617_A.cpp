/*
	
	https://codeforces.com/problemset/problem/617/A

  A. Bear and Big Brother

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);
 
void solve()
{
 int a,b;
 cin>>a>>b;
 int res=0;
 if(a>b)
 {
  cout<<res<<endl;
 } 
 else{
  while(a<=b)
  {
    res++;
    a=a*3;
    b=b*2;
  }
  cout<<res<<endl;
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