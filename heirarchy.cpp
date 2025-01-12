#include <iostream>
using namespace std;
class student{
    public:
    int roll,reg;
    virtual void get_number(){
        cout<<"Enter roll no: "<<endl;
        cin>>roll;
        cout<<"Enter registration no: "<<endl;
        cin>>reg;
    }
    virtual void put_number(){
        cout<<"Roll no: "<<roll<<endl<<"Registration number: "<<reg<<endl;
    }
};
class test: public student{
    public:
    int part1,part2;
    void get_number(){
        cout<<"Enter part1: "<<endl;
        cin>>part1;
        cout<<"Enter part2: "<<endl;
        cin>>part2;
    }
    void put_number(){
    cout<<"Part1: "<<part1<<endl<<"Part2: "<<part2<<endl;
    }
};
class score:public student{
    public:
    int score;
    void get_number(){
        cout<<"Enter score: "<<endl;
        cin>>score;
    }
   void put_number(){
    cout<<"Score: "<<score<<endl;
    } 
};
class result: public test, public score{
    public:
    void put_number(){
        cout<<"Total: "<<part1+part2+score<<endl;
    }
};
int main(){
    result ob1;
    ob1.test::get_number();
    ob1.score::get_number();
    ob1.put_number();
    return 0;


}