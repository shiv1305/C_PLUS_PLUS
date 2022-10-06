#include<iostream>


using namespace std;

class matrix
{
  private:
     int r1,r2,c1,c2,mat[10][10];
  public:
     void assign(int row1,int col1)
     {
       r1=row1;
       c1=col1;

     }
     void assigns(int row2,int col2)
     {
       r2=row2;
       c2=col2;

     }
     void set()
     {
       for(int i=0;i<r1;i++)
       for(int j=0;j<c1;j++)
       {
         cout<<"enter numbers of matrix of first matrix";
         cin>>mat[i][j];
       }
     }
     void show()
     {
        for(int i=0;i<r1;i++)
       for(int j=0;j<c1;j++)
       {
         cout<<"matrix is"<<mat[i][j]<<" ";
       }
       cout<<endl;
     }
     void sets()
     {
       for(int i=0;i<r2;i++)
       for(int j=0;j<c2;j++)
       {
         cout<<"enter numbers of matrix of second matrix"<<endl;
         cin>>mat[i][j];
       }
     }
     void shows()
     {
        for(int i=0;i<r2;i++)
       for(int j=0;j<c2;j++)
       {
         cout<<"matrix is"<<mat[i][j]<<endl;
       }
     }

     void mult(matrix a,matrix b)
     {
       r1=a.r1;
       c1=a.c1;
       r2=a.c1;
       c2=a.c2;
        for(int i=0;i<r1;i++){


        for(int j=0;j<c2;j++){


         mat[i][j]=0;
         for(int k=0;k<c1;k++)
         {
           mat[i][j]=mat[i][j]+mat[i][k]*mat[k][j];

            cout<<mat[i][j];
         }
       }
        }
     }
     void getresult()
     {
          for(int i=0;i<r1;i++){


        for(int j=0;j<c2;j++){
                cout<<mat[i][j];
        }
          }
     }
};
int main()
{
  matrix m1,m2,m3;
  int row1,col1,row2,col2;
  cout<<"enter row and column for 1st matrix"<<endl;
  cin>>row1>>col1;

  cout<<"enter row and column for 2nd matrix"<<endl;
  cin>>row2>>col2;


  if(col1==row2)
  {
    m1.assign(row1,col1);

    m1.set();
    m1.show();
    m2.assigns(row2,col2);

    m2.sets();
    m2.shows();
    m3.mult(m1,m2);
    m3.getresult();

  }
  else{
    cout<<"go away";
  }
}
