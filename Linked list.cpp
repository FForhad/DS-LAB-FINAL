#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node
{
    ll data;
    struct node *next;
}*head;

void createlist(ll n)
{
    struct node *newNode,*temp;
    ll a,i;
    head=(struct node*)malloc(sizeof(struct node));

    cin>>a;
    head->data=a;
    head->next=NULL;
    temp=head;
    for(i=1;i<n;i++)
    {
        newNode=(struct node*)malloc(sizeof(struct node));
        cin>>a;
        newNode->data=a;
        newNode->next=NULL;
        temp->next=newNode;
        temp=temp->next;

    }
}

int print()
{
    int e=0;
    struct node *temp=head;
    cout<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;e++;
    }
    cout<<endl;
}
int main()
{
    ll a,b,c,d;
    cin>>a;
    createlist(a);
    print();

return 0;
}
