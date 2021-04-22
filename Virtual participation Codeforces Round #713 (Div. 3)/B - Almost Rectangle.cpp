#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int i_index1=-1,j_index1=-1,i_index2=-1,j_index2=-1;
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i][j]=='*')
            {
                c++;
                if(c==1)
                {
                    i_index1=i;
                    j_index1=j;
                }
                if(c==2)
                {
                    i_index2=i;
                    j_index2=j;
                }
            }
            if(c==2)
            {
                break;
            }
        }
        if(c==2)
        {
            break;
        }
    }
    if(i_index1!=i_index2&&j_index1!=j_index2)
    {
        s[i_index1][j_index2]='*';
        s[i_index2][j_index1]='*';
    }
    if(i_index1==i_index2&&j_index1!=j_index2)
    {
        if(i_index1+1<n)
        {
            s[i_index1+1][j_index1]='*';
            s[i_index2+1][j_index2]='*';
        }
        else{
            s[i_index1-1][j_index1]='*';
            s[i_index2-1][j_index2]='*';
            
        }
    }
    if(i_index1!=i_index2&&j_index1==j_index2)
    {
        if(j_index1+1<n)
        {
            s[i_index1][j_index1+1]='*';
            s[i_index2][j_index2+1]='*';
        }
        else{
            s[i_index1][j_index1-1]='*';
            s[i_index2][j_index2-1]='*';
        }
    }
    // cout<<i_index1<<" "<<j_index1<<endl;
    // cout<<i_index2<<" "<<j_index2<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
