#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int Queue[5],n=5,frnt =-1,rear=-1;
void Insert_element()
{
          int data;
          if(rear == n-1)
          {
                    cout<<"Overflow\n";
          }
          else
          {
                    if(frnt==-1) frnt=0;
                    cout<<"Please insert element: ";
                    cin>>data;
                    rear++;
                    Queue[rear]=data;
          }

}
void Delete_element()
{
          if(frnt==-1 || frnt>rear)
                    cout<<"Underflow\n";
          else
          {
                    cout<<"Delete element: "<<Queue[frnt]<<endl;
                    frnt++;
          }
}
void Display_element()
{
          if(frnt==-1)
                    cout<<"Queue is empty.\n";
          else
          {
                    cout<<"elements are: \n";
                    for(int i=frnt;i<rear;i++)
                    {
                              cout<<Queue[i]<<"\n";
                    }
                    cout<<Queue[rear]<<endl;
          }
}
/*FForhad_1109028*/
int main()
{
          int option;
          cout<<"Queue work.";
          reply:
          cout<<"\nPlease select option showing below-\n1.Insert_element.\n2.Delete_element.\n3.Display_element.\n4.exit\n \n";
          cin>>option;
          while(option!=0)
          {
                    if(option==1)
          {
                    Insert_element();
                    cout<<"\n";
                    goto reply;
          }
          else if(option==2)
          {
                    Delete_element();
                    goto reply;
          }
          else if(option==3)
          {
                    Display_element();
                    goto reply;
          }
          else if(option==4)
                    {
          cout<<"**thanks for using Queue**\n \n";
          int c, d;
          for (c = 1; c <= 32767; c++)
                    for (d = 1; d <= 32767; d++)
                              {}
                              break;
                              }
          else
                    cout<<"**Invalid option.**\nPlease type valid option.\n \n";
                    goto reply;
          }
return 0;
}
