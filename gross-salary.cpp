#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct emp{
	int id;
	char name[30];
	int age;
	float bs;
};
int main(){
	struct emp s[10];
	struct emp *p;
	p=s;
	float da,hra,gs[10],b[10];
	int n;
	cout<<"Enter the no. of entries: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter ID: ";
		cin>>(p+i)->id;
		cout<<"Enter name: ";
		cin>>(p+i)->name;
		cout<<"Enter age: ";
		cin>>(p+i)->age;
		cout<<"Enter Basic Salary: ";
		cin>>(p+i)->bs;
		b[i]=(p+i)->bs;
		da=(0.8)*((p+i)->bs);
		hra=(0.1)*((p+i)->bs);
		gs[i]=((p+i)->bs)+da+hra;
        cout<<endl;
        cout<<endl;
	}
	cout<<"Details of employees: \n\n";
	cout<<"-------------------------------------------------------\n";
	cout<<"|Name|\tID|\tAge|\tBasic Salary|\tGross Salary|\n";
	cout<<"-------------------------------------------------------\n";
	for(int j=0;j<n;j++){
		cout<<(p+j)->name<<"\t"<<(p+j)->id<<"\t"<<(p+j)->age<<"\t"<<b[j]<<"\t\t"<<gs[j]<<endl;
	}

}