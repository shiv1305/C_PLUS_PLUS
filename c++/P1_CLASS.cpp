#include<iostream>
using namespace std;

class value
{

private:
    int a;
    float b;
    char c;

public:
    void assign(int x,float y, char z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {

        cout<<a<<"\n"<<b<<"\n"<<c<<endl;
    }

}Obj1;

//object creation to check wither program is running or not!!!!
/*int main()
{
    Obj1.assign(3,4.3,'c');

    Obj1.display();

    return 0;
}*/
