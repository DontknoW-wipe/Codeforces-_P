#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		if(n<=2)
		{
			cout<<1<<endl;
		}
		else
		{
			int c=1,l=3,h=l-1+x;
			while(true)
			{
				//cout<<"c "<<c<<" "<<l<<" "<<h<<endl;
				c++;
				if(n>=l&&n<=h)
				{
					cout<<c<<endl;
					break;
				}
				else
				{
					l=h+1;
					h=l-1+x;
				}
			}
			
		}
	}
	return 0;
}
