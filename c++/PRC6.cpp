#include <iostream>
using namespace std;

class ConstructorOverloading
{
private:
    int a;

public:
    ConstructorOverloading()
    {
        cout << "Default Constructor Called" << endl;
        a=0;
    }
    ConstructorOverloading( int r)
    {
        cout<<"Parameterize Constructor called"<<endl;

        a = r;
    }
    void print()
    {
        cout << "A= " << a << endl;

    }
};
int main()
{
    ConstructorOverloading obj1;
    obj1.print();
    ConstructorOverloading obj2(404050);

    obj2.print();
    return 0;
}
