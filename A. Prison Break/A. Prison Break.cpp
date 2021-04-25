#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int solve()
{
	int n,m,r,c;
	cin>>n>>m>>r>>c;
	return max(r-1,n-r)+max(c-1,m-c);

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
