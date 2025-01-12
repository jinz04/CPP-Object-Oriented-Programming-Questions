#include <iostream>
#include <string>
using namespace std;
class student{
    string name;
    int regno;
    int marks1,marks2,marks3;
    public:
    void read()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"\nEnter registration number: ";
        cin>>regno;
        cout<<"\nEnter marks in 3 subjects: "<<endl;
        cin>>marks1>>marks2>>marks3;

    }
    friend float average(student);
    void display()
    {
        cout<<"Registration number: "<<regno<<" Name: "<<name<<endl;
        cout<<"Average marks: "<<average(*this)<<endl;
    }
};
float average(student ob){
        return (float)(ob.marks1+ob.marks2+ob.marks3)/3;
    }
int main(){
    student stu;
    stu.read();
    stu.display();
    return 0;
}