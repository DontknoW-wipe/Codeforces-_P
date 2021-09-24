#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int f=a[k-1];
  int res=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]>0&&a[i]>=f)
    {
      res++;
    }
  }
  cout<<res<<endl;
}
int main()
{
  solve();
  return 0;
}