/*
    https://codeforces.com/contest/1512/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int first_element=-1,second_element=-1,first_element_c=0,second_element_c=0,index1=-1,index2=-1;
    for(int i=0;i<n;i++)
    {
        if(first_element==-1)
        {
            first_element=a[i];
            index1=i;
        }
        else if(first_element!=-1&&a[i]!=first_element)
        {
            second_element=a[i];
            index2=i;
        }
       if(a[i]==first_element)
       {
           first_element_c++;
       }
       else{
           second_element_c++;
       }
        
    }
    if(first_element_c==1)
    {
        return index1+1;
    }
    return index2+1;
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
