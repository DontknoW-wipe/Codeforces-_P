#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	k--;
	int y1=a[k],res=0;
	for(int i=0;i<n;i++)
	{
		if(y1==0)
		{
			if(a[i]>y1)
			{
				res++;
			}
		}
		else if(a[i]>=y1)
		{
			res++;
		}
	}
	cout<<res<<endl;
}
int main()
{
  speed_karo
  // int t;cin>>t;
  // while(t--)
  // {
    solve();
  // }
  return 0;
}