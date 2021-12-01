


#include<iostream>
using namespace std;

class a2;
class a3;

class a1_90
{
	string name = "Yuvraj";
public:
	friend a3 operator + (const a1_90& a, a2& b);
};

class a2
{
	string name = "Singh";
public:
	friend a3 operator + (const a1_90& a, a2& b);
};

class a3
{
	string name;
public:
	friend a3 operator + (const a1_90& a, a2& b);
	void print() { cout<<name; }
};

a3 operator + (const a1_90& a, a2& b)
{
	a3 c;
	c.name = a.name + b.name;
	return c;
}

int main()
{
	a1_90 A;
	a2 B;
	a3 C = A + B;
	C.print();
}