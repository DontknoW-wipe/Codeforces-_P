#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,r;
	cin>>l>>r;
	int p=0;
	for(int i=l;i<=r;i++)
	{
	ostringstream str1; 
    str1 <<i;  
    string s = str1.str();
    sort(s.begin(),s.end());
    int o=s.size();
    int c=1;
    for(int j=0;j<o-1;j++)
    {
    	if(s[j]==s[j+1])
    	{
    	break;	
		}
		c++;
	}
	//cout<<c<<" "<<o<<endl;
	if(c==o)
	{
		p=i;
		break;
	}
    
	}
	if(p>0)
	{
		cout<<p<<endl;
	}
	else
	{
		cout<<-1<<endl;
	}
	return 0;
}
