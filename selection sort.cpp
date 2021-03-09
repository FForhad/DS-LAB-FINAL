#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,c,d,e=0,i,j;
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
        for(j=i;j<=a;j++)
        {
            if(x[j]<x[i])
                swap(x[i],x[j]);
        }
    }

    cout<<x[0];
    for(i=1;i<a;i++)
    {
        cout<<" "<<x[i];
    }
    cout<<endl;

return 0;
}

