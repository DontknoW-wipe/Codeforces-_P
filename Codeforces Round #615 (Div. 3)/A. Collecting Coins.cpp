#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,n;
        cin>>a>>b>>c>>n;
        long long int y=max(a,b);
        y=max(y,c);
        long long int y1,y2;
        if(y==a)
        {
            y1=a-b;
            y2=a-c;
        }
        else if(y==b)
        {
            y1=b-a;
            y2=b-c;
        }
        else if(y==c)
        {
            y1=c-b;
            y2=c-a;
        }
        long long int y3=y1+y2;
        long long int p=0;
        if(y3>n)
        {
            p=1;
        }
        else
        {
            p=0;
        }
        if(p==0)
        {

            n=n-y3;
            if(n%3==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {

                cout<<"NO"<<endl;
            }
        }
        else
        {

            cout<<"NO"<<endl;
        }

    }
    return 0;
}
