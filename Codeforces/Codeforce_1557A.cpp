#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<setprecision(9)<<fixed;
	double sum=0;
	for(int i=0;i<n-1;i++)
	{
		sum+=a[i];
	}
	sum=(sum)/(n-1);
	sum=sum+a[n-1];
	cout<<sum<<endl;

}
int main()
{
  speed_karo
  int t;cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}