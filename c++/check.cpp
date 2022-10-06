#include<iostream>
using namespace std;

class Student
{
private:
    char name[32];
    int roll;
    int mark[6];

public:
    void read()
    {
        cout << "Enter the name and roll number of  Student" << endl;
        cin >> name >> roll;
        cout << "Enter the marks in 6 subjects" << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << "Mark in subject- " << i + 1 << endl;
            cin >> mark[i];
        }
    }
    void print()
    {
        cout << "Name = " << name << endl;
        cout << "Roll = " << roll << endl;
        float tmark;
        for (int i = 0; i < 6; i++)
        {
            cout << "Subject-" << i + 1 << "= " << mark[i] << endl;
            tmark = tmark + mark[i];
        }
        cout << "Total mark = " << tmark << endl;
        cout << "Average mark = " << tmark / 6 << endl;
    }
};

int main()
{
    Student obj;
    obj.read();
    obj.print();

    return 0;
}
