#include<iostream>
#include<string>

using namespace std;

struct employee {
    string name;
    int age;
    double salary;
};

int main ()
{
    employee e[3];
    cout<<"enter name, age and salary of 3 employees : "<<endl;

    for(int i=0; i<3; i++)
    {
        cin>>e[i].name;
        cin>>e[i].age;
        cin>>e[i].salary;
    }

    cout<<endl<<"employees details"<<endl<<endl;
    
    
    for(int i=0; i<3; i++)
    {   
        cout<<"employees number: "<<(i+1)<<endl;
        cout<<"the employee's name is : "<<e[i].name<<endl;
        cout<<"the employee's age is : "<<e[i].age<<endl;
        cout<<"the employee's salary is : "<<e[i].salary<<endl<<endl<<endl;
        
    }

    

    return 0;
}