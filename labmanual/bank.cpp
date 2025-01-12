#include <iostream>
#include <string>
using namespace std;
class bank{
    string name;
    string accno;
    string acctype;
    float balance;
    static int trans;
    public:
    bank(){
        balance=0.0;
    }
    void read(){
        cout<<"Enter name of holder: "<<endl;
        getline(cin,name);
        cout<<"Enter account number: "<<endl;
        cin>>accno;
        cout<<"Enter account type: "<<endl;
        cin>>acctype;
        cin.ignore();

    }
    static void transno()
    {
        cout<<"Number of transactions: "<<trans<<endl;
    }
    void deposit();
    void withdraw();
};
int bank::trans=0;
void bank::deposit(){
    float dep;
    cout<<"Enter amount you want to deposit: "<<endl;
    cin>>dep;
    balance=balance+dep;
    trans++;
}
void bank::withdraw(){
    float with;
    cout<<"Current account balance: "<<balance<<endl;
    cout<<"Enter amount to withdraw: "<<endl;
    cin>>with;
    balance= balance-with;
    cout<<"Available balance: "<<balance<<endl;
    trans++;
}
int main(){
    bank user;
    user.read();
    user.deposit();
    bank::transno();
    user.withdraw();
    bank::transno();
}