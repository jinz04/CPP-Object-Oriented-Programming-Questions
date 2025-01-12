#include <iostream>
#include <string>
using namespace std;
class employee{
    string name;
    int empcode;
    float basic, da, tax, netsal;
    public:
    employee(){
        name="";
        empcode=0;
        basic=0.0, da=0.0, tax=0.0, netsal=0.0;
    }
    void read(){
        cout<<"Enter Employee name: "<<endl;
       cin>>name;
        cout<<"Enter employee code: "<<endl;
        cin>>empcode;
        cout<<"Enter basic salary: "<<endl;
        cin>>basic;
    }
    void calculate(){
        da=0.52*basic;
        tax= 0.3*(basic+da);
        netsal=basic+da-tax;
    }

    void display(){
        this->calculate();
        cout<<"Employee name: "<<name<<" Employee code: "<<empcode<<endl;
        cout<<"Basic salary: "<<basic<<" DA: "<<da<<" Income tax: "<<tax<<endl;
        cout<<"Net salary: "<<netsal<<endl;
      }
};
int main(){
    employee emp1,emp2;
    emp1.read();
    emp2.read();
    emp1.display();
    emp2.display();
}