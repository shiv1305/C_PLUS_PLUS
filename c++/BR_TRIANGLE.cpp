#include<iostream>
using namespace std;


int main()
{
    int choice,n;
    cout<<"Enter the choice";
    cout<<"Enter 1 for inverted triangle \n Enter 2 for triangle\n";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"Enter the desire star u want to print n \n";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)//colombs for space
          {
              cout<<"  ";

          }
          for(int j=1;j<=i;j++)//colomb for star
          {
              cout<<"* ";
          }
          cout<<"\n";

    }break;
    case 2:
        cout<<"Enter the desire star u want to print n \n";
        cin>>n;
        for(int i=1;i<=n;i++)//row
        {
            for(int j=1;j<=i;j++) //coloums for space
            {
                cout<<"  ";
            }
            for(int j=i;j<=n;j++) //coloums for star
            {
                cout<<"* ";
            }
            cout<<"\n";
        }break;
    default:
        cout<<"INVALID CHOICE \n EXIT";
}

}

