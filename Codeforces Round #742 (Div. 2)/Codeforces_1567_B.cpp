/*

	Codeforces 

	https://codeforces.com/contest/1567/problem/B

	B. MEXor Mixup

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

int findXor(int n)
{
	int mod=n%4;
	if(mod==0)
	{
		return n;
	}
	else if(mod==1)
	{
		return 1;
	}
	else if(mod==2)
	{
		return n+1;
	}
	else if(mod==3)
	{
		return  0;
	}
}
void solve()
{
	int a,b;
	cin>>a>>b;
	int sum=0;
	sum+=(findXor(0)^findXor(a-1)); 
	int req=sum^b;
	if(req==0)
	{
		cout<<a<<endl;
	}
	else if(req==a)
	{
		cout<<a+2<<endl;
	}
	else{
		cout<<a+1<<endl;
	}
	// cout<<(sum^b)<<" ";

	// cout<<endl;
}
int main()
{
  SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB
  int t=1;cin>>t;
  while(t--)
  {
  	solve();
  }
  return 0;
}