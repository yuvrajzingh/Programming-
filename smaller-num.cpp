#include<iostream>
#include<conio.h>
using namespace std;

class class2;

class class1

{

int no1;

public:

void get1()

{

cout<<"Enter number 1:";

cin>>no1;

}

friend void smallest(class1 no1,class2 no2);

};

class class2

{

int no2;

public:

void get2()

{

cout<<"Enter number 2:";

cin>>no2;

}

friend void smallest(class1 no1,class2 no2);

};

void smallest(class1 c1,class2 c2)

{

if(c1.no1<c2.no2)

cout<<"no1 is smallest";

else

cout<<"no2 is smallest";

}

int main()

{

class1 c1;

class2 c2;


c1.get1();

c2.get2();

smallest(c1,c2);

getch();

return 0;
}