#include<iostream>
using namespace std;
class Time
{

private:
    int hh,mm,ss;
public:
    void getTime()
    {
        cout<< "Enter the Time in HH : MM : SS  formate"<<endl;
        cin>>hh>>mm>>ss;
    }
    void show()
    {

        cout<<hh<<":"<<mm<<":"<<ss<<endl;
    }


    void addTime(Time t1,Time t2)
    {
       ss=t1.ss+t2.ss;
       mm=ss/60;
       ss=ss%60;
       mm=t1.mm+t2.mm+mm;
       hh=mm/60;
       mm=mm%60;
       hh=t1.hh+t2.hh+hh;
    }
    void subTime(Time t1,Time t2)
    {
        if(t2.ss>t1.ss)
        {
            --t1.mm;
            t1.ss=t1.ss+60;
        }if(t2.mm>t1.mm)
        {
            --t1.hh;
            t1.mm=t1.mm+60;
        }if(t2.hh>t1.hh)
        {
            cout<<"Subtraction is impossible"<<endl;
            exit(1);
        }else
        {
            ss=t1.ss-t2.ss;
            mm=t1.mm-t2.mm;
            hh=t1.hh-t2.hh;
        }
    }
};
int main()
{
    Time t1,t2,sum,sub;
    cout<<"Enter the first Time "<<endl;
    t1.getTime();
    cout<<"First Time : "<<endl;
    t1.show();
    cout<<"Enter the second Time "<<endl;
    t2.getTime();
    cout<<"Second Time : "<<endl;
    t2.show();

    sum .addTime(t1,t2);
    cout<<"After adding Time "<<endl;
    sum.show();
    sub .subTime(t1,t2);
    cout<<"After subtraction Time "<<endl;
    sub.show();


}
