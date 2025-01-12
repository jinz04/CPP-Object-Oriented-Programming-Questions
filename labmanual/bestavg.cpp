#include <iostream>
using namespace std;
class student{
    int usn;
    string name;
    float marks1, marks2,marks3;
    public:
    void read(){
        cout<<"Enter name and USN: "<<endl;
        getline(cin,name);
        cin>>usn;
        cout<<"Enter marks in 3 subjects:"<<endl;
        cin>>marks1>>marks2>>marks3;
        cin.ignore();
    }
    void average(){
        float total,min;
        total= marks1+marks2+marks3;
        if(marks1<marks2 && marks1<marks3)
        min=marks1;
        else if(marks2<marks1 && marks2<marks3)
        min=marks2;
        else
        min=marks3;
        total=total=min;
        cout<<"Average: "<<total/2<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<" USN: "<<usn<<endl;
    }
};
int main(){
    student stu[3];
    for(int i=0;i<3;i++)
    {
        stu[i].read();
    }
    for(int i=0;i<3;i++)
    {
        stu[i].display();
        stu[i].average();
    }
}