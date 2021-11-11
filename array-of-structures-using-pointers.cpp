#include<iostream>
using namespace std;

struct student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    student s;

    student *ptr= &s;

    cout<<"Enter students details: "<<endl;
    cout<<"enter students name: ";
    cin.getline(ptr->name, 50);
    cout<<"enter students age: ";
    cin>>ptr->age;
    cout<<"enter students marks: ";
    cin>>ptr->marks;

    cout<<"The details are as follows: "<<endl;

    cout<<"students name: ";
    cout<<ptr->name<<endl;
    cout<<"students age: ";
    cout<<ptr->age<<endl;
    cout<<"students marks: ";
    cout<<ptr->marks<<endl;




    return 0;
}