#include <iostream>
using namespace std;
class Matrix
{
private:
    int mat[2][3];



public:


    void input(int arry[2][3])
    {


        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> mat[i][j];
            }
        }
    }
    void show(int arry[2][3])
    {

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }




   friend Matrix add(Matrix A, Matrix B)
{
    Matrix temp;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp.mat[i][j] = A.mat[i][j] + B.mat[i][j];
        }
    }
    return temp;
}
friend Matrix sub(Matrix A, Matrix B)
{
    Matrix temp;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp.mat[i][j] = A.mat[i][j] - B.mat[i][j];
        }
    }
    return temp;
}
};


int main()
{
    int arr1[2][3]={{1,2,3},{4,5,6}};
    int arr2[2][3]={{7,8,9},{2,1,7}};
    Matrix a,b,d;
    a.input(arr1);
    cout<<"array"<<endl;
    a.show(arr1);





    return 0;
}
