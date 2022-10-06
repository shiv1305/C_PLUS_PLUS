#include<iostream>

using namespace std;
class student
{
private:
    char name[20];
    int roll;
    int mark[6];



public:
    void read()
    {

        cout<<"Enter the name:";
        cin.get(name,20);
        cout<<"Enter the Roll NO:";
        cin>>roll;
        cout<<"Enter the 6 subject mark :"<<endl;
        for(int i=1;i<=6;i++)
        {
            cout<<"Subject"<<i<<endl;
            cin>>mark[i];
        }

    }
    void result()
    {
        float AvgMark,Tmark;

        cout<<"Name = "<<name<<endl;
    cout<<"Roll = "<<roll<<endl;
        for(int i=1;i<=6;i++)
        {
            cout<<"subject"<<i<<"="<<mark[i]<<endl;
            Tmark=Tmark+mark[i];
        }
        AvgMark=Tmark/6;

        cout<<"Total Mark = "<<Tmark<<endl;
        cout<<"Average Mark = "<<AvgMark<<endl;

    }
};
int main()
{
    student obj;
    obj.read();
    obj.result();
    return 0;
}
