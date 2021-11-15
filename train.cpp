#include<iostream>
 using namespace std;
 class train
 {
     private:
         int n1;
         int n2;
         int n3;
         int n4;
         int n5;
     public:
         void GetData();
         void DispData();
 };
 void train::GetData()
 {
     cout<<"enter the number of seats in tier1 : ";
     cin>>n1;
     cout<<"enter the number of seats in tier2 : ";
     cin>>n2;
     cout<<"enter the number of seats in tier3 : ";
     cin>>n3;
     cout<<"enter the number of booked tickets : ";
     cin>>n4;
     cout<<"enter the number of cancelled tickets : ";
     cin>>n5;
 }
 void train::DispData()
 {
     cout<<endl<<n1<<"\t"<<n2<<"\t"<<n3 <<"\t" << n4 << "\t" << n5;
 }
 int main()
 {
     train e[3];
     cout<<"Enter the train information : "<<endl;
     for(int i=0;i<3;i++)
     {
         e[i].GetData();
     }
     cout<<endl<<"The train information is : ";
     cout<<endl<<"tier1\ttier2\ttier3\tbooked\tcanceled";
     for(int i=0; i<3;i++)
     {
         e[i].DispData();
     }
     
     
 }