#include <iostream>
using namespace std;
class Bank
{
private:
    string name;
    int accno;
    string acctype;
    int balance;

public:
    void assign()
    {
        cout << "Enter Name, Account number, Account type, Balance:";
        cin >> name >> accno >> acctype >> balance;
    }
    void deposit(int val)
    {
        balance += val;
    }
    void showbal()
    {
        cout<<"Balance is:"<<balance<<endl;
    }
    void withdraw(int val)
    {
        const int min = 3000;
        if ((balance - val) <= 3000)
        {
            cout << "You can withdraw only " << (balance - 3000) << endl;
        }
        else
        {
            balance -= val;
            cout << "New Balance is:" << balance << endl;
        }
    }
    void showdetail()
    {
        cout<<"Name is:"<<name<<" Balance is:"<<balance;
    }
};
int main()
{
    int val;
    Bank b;
    b.assign();
    cout<<"What amount you would like to deposit? ";
    cin>>val;
    b.deposit(val);
    b.showbal();
    cout<<"What amount you want to withdraw? ";
    cin>>val;
    b.withdraw(val);
    b.showdetail();
    cout<<endl;
    return 0;
}