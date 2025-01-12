#include <iostream>
using namespace std;
class student
{
    int regno;
    string name;
    int fees;
    public:
    student(int reg,string sname,int fee)
    {
        regno=reg;
        name=sname;
        fees=fee;
    }
    void display()
    {
        cout<<"Name of student: "<<name<<endl;
        cout<<"Registration number: "<<regno<<endl;
        cout<<"Fees: "<<fees;
    }
};
int main()
{
    student ob[3]={student(202300186,"Shreyas",128000),student(202300268,"Jini",128000),student(202300268,"Shinjini",128000)};
    for(int i=0;i<3;i++)
    {
        ob[i].display();
        cout<<endl;
    }
    return 0;
}