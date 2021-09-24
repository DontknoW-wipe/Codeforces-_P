/*
	
	https://codeforces.com/problemset/problem/977/A

  A. Wrong Subtraction

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);
 
void solve()
{
  int n,k;
  cin>>n>>k;
  while(k--)
  {
    int r=n%10;
    if(r==0)
    {
      n=n/10;
    }
    else{
      n--;
    }
  }
  cout<<n<<endl;
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