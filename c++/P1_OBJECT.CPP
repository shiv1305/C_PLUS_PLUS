#include<iostream>
#include<cstring>
using namespace std;
class student
{
    //declaration of variable
private:
    char name[20],branch[15],sec;
    int roll;

   //assigning the values
public:
    void assign(char a[],char b[],char c,int d)
    {

        strcpy(name,a);
        strcpy(branch,b);
        sec=c;
        roll=d;
    }
    //display the value
    void display()
    {

        cout<<name<<" "<<branch<<" "<<sec<<" "<<roll<<"\n";
    }
}
//object creation
Smiley,Rinky,Bitu,Obj1;


int main()
{

    //object assignment
    Smiley.assign("Smiley","ETC",'A',3147);
    Rinky.assign("Rinky","CSE",'B',2210);
    Bitu.assign("Bitu","CHEMICAL",'A',5510);
    Obj1.assign("Kumar","IT",'A',3321);

    //display
    Smiley.display();
    Rinky.display();
    Bitu.display();
    Obj1.display();

    return 0;
}
