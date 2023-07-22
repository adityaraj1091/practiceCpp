#include<iostream>
using namespace std;
class student
{
    int roll;
    char grade;
    float per;
public:
    student::student(int=0,char=' ',float=0.0);
    void get();
    void show();
};
student::student(int r,char g,float p)
{
    roll=r;
    grade=g;
    per=p;
}
void student:: get()
{
    cout<<"enter the roll,grade and per: ";
    cin>>roll>>grade>>per;
}

void student::show()
{
    cout<<"your roll: "<<roll<<endl<<"your grade: "<<grade<<endl<<"your per: "<<per<<endl;
}
int main()
{
    student s(10,'A',87.9);
    student p();
    s.show();
    return 0;
}