#include <iostream>
#include <string>
using namespace std;
class student{
    protected:
    int usn;
    string name;
    int age;
};
class ugstudent: public student{
    protected:
    int sem;
    float fees,stipend;
    public:
    void read(){
        cout<<"Enter USN:"<<endl;
        cin>>usn;
        cout<<"Enter name and age: "<<endl;
        cin>>name>>age;
        cout<<"Enter semester:"<<endl;
        cin>>sem;
        cout<<"Enter fees and stipend: "<<endl;
        cin>>fees>>stipend;
    }
    int returnsem(){
        return sem;
    }
    int returnage(){
        return age;
    }
};
class pgstudent: public student{
    protected:
    int sem;
    float fees,stipend;
    public:
    void read(){
        cout<<"Enter USN:"<<endl;
        cin>>usn;
        cout<<"Enter name and age: "<<endl;
        cin>>name>>age;
        cout<<"Enter semester:"<<endl;
        cin>>sem;
        cout<<"Enter fees and stipend: "<<endl;
        cin>>fees>>stipend;
    }
    int returnsem(){
        return sem;
    }
    int returnage(){
        return age;
    }
};
int main(){
    ugstudent ug[3];
    pgstudent pg[3];
    int age1=0,age3=0,age2=0,age4=0;
    int count1=0,count2=0,count3=0,count4=0;
    for(int i=0;i<3;i++)
    {
        ug[i].read();
    }
    for(int i=0;i<3;i++)
    {
        pg[i].read();
    }
    for(int i=0;i<3;i++)
    {
        if(ug[i].returnsem()==1)
        {
            age1+=ug[i].returnage();
            count1++;
        }
        if(ug[i].returnsem()==3)
        {
            age3+=ug[i].returnage();
            count3++;
        }
    }
    cout<<"Average age of semester 1 ug students: "<<(float)age1/count1<<endl;
    cout<<"Average age of semester 3 ug students: "<<(float)age3/count3<<endl;
    for(int i=0;i<3;i++)
    {
        if(pg[i].returnsem()==2)
        {
            age2+=pg[i].returnage();
            count2++;
        }
        if(pg[i].returnsem()==4)
        {
            age4+=pg[i].returnage();
            count4++;
        }
    }
    cout<<"Average age of semester 2 pg students: "<<(float)age2/count2<<endl;
    cout<<"Average age of semester 4 pg students: "<<(float)age4/count4<<endl;
}