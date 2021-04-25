#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll gcdE(ll n,ll b)
{
	if(b==0)
	{
		return n;
	}
	return gcdE(b,n%b);
}
ll solve()
{
	ll n;
	cin>>n;
	ll x=0;
	while(x<=1)
	{
		ll k=n,sum=0;
		while(k>0)
		{
			sum+=(k%10);
			k/=10;
		}
		x=gcdE(n,sum);
		if(x>1)
		{
			return n;
		}
		n++;
	}
	return n;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
