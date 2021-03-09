#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,c,d,e=0,i;
    cout<<"Enter the size of array:";
    cin>>a;
    cout<<endl;

    ll x[a];

    cout<<"Enter all elements of array:";
    for(i=0;i<a;i++)
    {
        cin>>x[i];
    }

    cout<<"Enter the value you want to search:";
    cin>>b;
    cout<<endl;

    if(binary_search(x,x+a,b))
        cout<<"Found "<<b<<" in the array"<<endl;
    else
        cout<<"Not Found "<<b<<" in the array"<<endl;

return 0;
}
