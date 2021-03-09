#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,c,d,e=0;
    string s,t,p;

    cout<<"Enter the size of array:";
    cin>>a;
    cout<<endl;

    ll x[a];

    cout<<"Enter all elements of array:";
    for(i=0;i<a;i++)
    {
        cin>>x[i];
    }

    for(i=0;i<a;i++)
    {
        for(j=i-1;j=0;j--)
        {
            if(x[i]<x[j])
            {
                swap(x[i],x[j]);
            }
        }
    }

}
