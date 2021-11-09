#include<iostream>

using namespace std;

struct student
{
    char name[100];
    int age;
    double marks;
};

int main()
{
    student s ; //'student' is the structure name and 's' is the variable  
    cout<<"*Students details*"<<endl<<endl<<"Enter students name: ";
    cin.getline(s.name,100);
    cout<<"Enter age: ";
    cin>>s.age;
    cout<<"enter marks: ";
    cin>>s.marks;
    cout<<endl<<endl;

    cout<<"the details are as follows : "<<endl;
    cout<<"students name : "<<s.name<<endl;
    cout<<"students age : "<<s.age<<endl;
    cout<<"students marks : "<<s.marks<<endl;
    

    return 0;
}