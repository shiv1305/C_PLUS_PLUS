#include<iostream>
using namespace std;

int triangle()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n-i)
            {

                cout<<"  ";
            }else
            {
                cout<<"* ";
            }
        }cout<<"\n";
    }
}
int down_triangle()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }else{
                cout<<"*";
            }
        }cout<<"\n";
    }
}
int main()
{
   triangle();
   cout<<"for inverted enter n";
   down_triangle();
}

