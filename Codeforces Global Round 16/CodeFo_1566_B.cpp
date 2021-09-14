/*
	https://codeforces.com/contest/1566/problem/B

	B. MIN-MEX Cut

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
	int z=0,o=0,t=0,df=0,df1=0;
	for(int i=0;i<s.size();i++)
	{

		if(s[i]=='0')
		{
			z++;
		}
		else if(s[i]=='1')
		{
			o++;
		}
		else{
			t++;
		}
		if(s[i]=='0')
		{
			df1=1;
		}
		else if(s[i]!='0'&&df1==1)
		{
			df++;
			df1=0;
		}
	}
	if(z==s.size())
	{
		cout<<1<<endl;
		return;
	}
	else if(o==s.size()||t==s.size()){
		cout<<0<<endl;
		return;
	}
	if(s[s.size()-1]=='0')
	{
		df++;
	}
	cout<<min(df,2)<<endl;

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