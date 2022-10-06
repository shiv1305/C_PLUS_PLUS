#include <iostream>
using namespace std;
class NumberAdd
{
float a, b;
public:
void Read ()
{
cout<<"Enter two Numbers:";
cin>>a>>b;
}
friend float Add (NumberAdd obj) // friend function inline definition
{

return obj.a + obj.b;
}
};
int main ( )
{
NumberAdd AB;
AB.Read ( );
float res = Add (AB); // calling friend function
cout<<"Sum = "<<res;

}
