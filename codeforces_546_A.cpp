/*
	
	https://codeforces.com/problemset/problem/546/A
s
  A. Soldier and Bananas

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);
 
void solve()
{
  int n,k,w;
  cin>>k>>n>>w;
  w=w*(w+1)/2;
  w=k*w;
  if(n>=w)
  {
    cout<<0<<endl;
  }
  else{
    cout<<w-n<<endl;
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