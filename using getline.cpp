#include<string>
#include<iostream>
using namespace std;
class Emp
{
    int age;
    char *p;
    float sal;
public:
    Emp();
    void show();
    ~Emp();
};
Emp::~Emp()
{
    cout<<"enter age and sal: ";
    cin>>age>>sal;
    char temp[50];
    cout<<"enter the name: ";
    cin.ignore();
    cin.getline(temp,50);
    int x=strlen(temp);
    p=(char *)mallo((x+1)*sizeof(char));
    strcpy(p,temp);
}
void Emp::show()
{
    cout<<age<<endl<<p<<endl<<sal<<endl;
}
Emp::~emp()
{
    free(p);
}
int main()
{
    Emp E;
    E.show();
    return 0;
}

