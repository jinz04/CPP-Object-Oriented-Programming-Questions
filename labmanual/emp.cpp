#include <iostream>
#include <string>
using namespace std;
float max=0,min=0;
class employee{
    string name;
    int empcode;
    float grosssal;
    public:
    void read(){
        cout<<"Enter employee name: "<<endl;
        cin>>name;
        cout<<"Enter employee code: "<<endl;
        cin>>empcode;
        cout<<"Enter gross salary: "<<endl;
        cin>>grosssal;
    }
    float returnsal(){
        return grosssal;
    }
    void display(){
        cout<<"Employee name: "<<name<<" Employee code: "<<empcode<<"Gross salary: "<<grosssal<<endl; 
    }
};
    int main()
    {
        employee emp[5];
        for(int i=0;i<5;i++)
        emp[i].read();
        int max=0,min=0;
        for(int i=0;i<5;i++)
        {
           if(max>emp[i].returnsal()){
           max=i;
           }
           if(min<emp[i].returnsal()){
           min=i;
        }
        }
        cout<<"Employee with maximum salary: "<<endl;
        emp[max].display();
        cout<<"Employee with minimum salary: "<<endl;
        emp[min].display();
    }
 