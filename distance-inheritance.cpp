#include<iostream>

using namespace std;
class Distance{
    int kms,meter;
    public:
    Distance(int,int);
  inline pair<int,int> display(){
        return make_pair(kms,meter);
    };
};
Distance::Distance(int k,int m)
{   
    kms=k;meter=m;
}
class School:public Distance{
    public:
    School(int k,int m):Distance(k,m){};
};
class Office:public Distance{
    public:
    Office(int k,int m):Distance(k,m){};
};
int main()
{
    int k,m;
    cout<<"Enetr distance for school:\n ";
    cout<<"kilometers: ";
    cin>>k;
    cout<<"meters: ";
    cin>>m;
    School ob(k,m);
    cout<<"Enetr distance for office:\n ";
    cout<<"kilometers: ";
    cin>>k;
    cout<<"meters: ";
    cin>>m;
    Office ob2(k,m);
    cout<<"The distance from school is "<<ob.display().first<<"km"<<" "<<ob.display().second<<"meters\n";
    cout<<"The distance from office is "<<ob2.display().first<<"km"<<" "<<ob2.display().second<<"meters\n";

}