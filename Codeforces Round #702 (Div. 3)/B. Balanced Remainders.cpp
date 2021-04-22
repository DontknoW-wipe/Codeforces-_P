#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%3==0)
            {
                c0++;
            }
            else if(a[i]%3==1)
            {
                c1++;
            }
            else{
                c2++;
            }
        }
        int c=0,maxE;
        while(true)
        {
        	//cout<<c<<endl;
            if(c0==c1&&c1==c2)
            {
                break;
            }
            else{
                c++;
                maxE=max(c0,c1);
                maxE=max(maxE,c2);
                if(maxE==c0)
                {
                	c0--;
                	c1++;
				}
				else if(maxE==c1)
				{
					c1--;
					c2++;
				}
				else if(maxE==c2)
				{
					c2--;
					c0++;
				}
            }
        }
        cout<<c<<endl;
    }
}
