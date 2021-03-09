#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll Stack[5],top=-1,data;
void push()
{
          if(top==4)
          {cout<<"Overflow\n";}
          else
          {
                    cout<<"Push Value : ";
                    cin>>data;
                    top++;
                    Stack[top]=data;
          }
}
void pop()
{
          if(top==-1)
          {
                    cout<<"Underflow\n \n";
          }
          else
          {
                    cout<<"deleting value : "<<Stack[top]<<"\n \n";
                    top--;
          }
}
void display()
{
          if(top==-1)
          {
                    cout<<"Stack empty\n \n";
          }
          else{
                    cout<<"showing the list below-\n";
          for(int i=0;i<=top;i++)
          {
                    cout<<Stack[i]<<"\n";
          }cout<<"\n";}
}
///**Group_4**///
int main()
{
          int option;
          cout<<"Stack work.";
          reply:
          cout<<"\nPlease select option showing below-\n1.push.\n2.pop.\n3.display\n4.exit\n \n";
          cin>>option;
          while(option!=0)
          {
                    if(option==1)
          {
                    push();
                    cout<<"\n";
                    goto reply;
          }
          else if(option==2)
          {
                    pop();
                    goto reply;
          }
          else if(option==3)
          {
                    display();
                    goto reply;
          }
          else if(option==4)
                    {
          cout<<"*thanks for using Stack*\n \n";
                              break;
                              }
          else
                    cout<<"*Invalid option.*\nPlease type valid option.\n \n";
                    goto reply;
          }
return 0;
}
