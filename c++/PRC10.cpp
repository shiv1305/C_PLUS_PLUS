#include<iostream>
using namespace std;
class division
{
private:
    float a,b,res;
public:
    void get()
    {
        cout<<"Enter two number a and b "<<endl;
        cin>>a>>b;
    }
    void result()
    {
        if(b==0)
        {
            throw b;

        }else
        {
            res=a/b;
            cout<<a<<"/"<<b<<"="<<res<<endl;
        }
    }
};
int main()
{
    try
    {
        division d;
        d.get();
        d.result();
    }
    catch(float a)
    {
        cout<<"Division by Zero can't execute";
    }
    return 0;


}
