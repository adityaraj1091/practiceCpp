#include<iostream>
using namespace std;
void volume (int);
void volume (int,int,int);
int main()
{
    int choice;
    int l,b,h,s;
    cout<<"select a fig";
    cout<<endl<<"1. cube"<<endl<<"2. cuboid"<<endl;
    cout<<"Enter your choice";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"enter the side of a cube: ";
            cin>>s;
            volume(s);
            break;
        
        case 2:
            cout<<"enter l,b,h of cuboid";
            cin>>l>>b>>h;
            volume(l,b,h);
            break;

        default:
            cout<<"wrong choice";
    }
    return 0;
}
void volume(int s)
{
    cout<<"volume of cube is"<<s*s*s;
}
void volume(int l,int b,int h)
{
    cout<<"volume of cuboid is"<<l*b*h;
}