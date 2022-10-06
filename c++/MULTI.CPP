#include<iostream>

using namespace std;

class Matrix
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i,j,k;

public :
    void InputMatrix();
    void Multi();
    void OutputMatrix();
};

void Matrix::InputMatrix()
{
    cout<<"Enter the element for first Matrix: \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }

    }
    cout<<"Enter the element for second Matrix: \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
}
void Matrix::Multi()
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}
void Matrix::OutputMatrix()
{
    cout<<"Resultant Matrix is :\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    Matrix obj;
    obj.InputMatrix();
    obj.Multi();
    obj.OutputMatrix();
    return 0;
}
