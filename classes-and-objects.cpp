#include<iostream>
#include<string>

using namespace std;

class cars {

    private: 
            //member variables or data members     
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

    public:
            //member functions 
    void setdata()
    {
        cout<<"enter details like company name, model name, fuel type, mileage and price respectively : "<<endl;

        cin>>company_name;
        cin>>model_name;
        cin>>fuel_type;
        cin>>mileage;
        cin>>price;
        cout<<endl;
    }  

    void displaydata()
    {   
        cout<<"The car details are as follows : "<<endl<<endl;
        cout<<"The company name is: "<<company_name<<endl;
        cout<<"The model name is: "<<model_name<<endl;
        cout<<"The fuel type is: "<<fuel_type<<endl;
        cout<<"The car's mileage is: "<<mileage<<endl;
        cout<<"The car's price is: "<<price<<endl;
    }      

};

int main()
{   
    cars car1;
    car1.setdata();
    car1.displaydata();

    return 0;
}