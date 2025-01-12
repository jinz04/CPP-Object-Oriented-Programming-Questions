#include <iostream>
using namespace std;
class student{
    protected:
    int rollno;
    int regno;
    public:
    virtual void getnumber()
    {
        cout<<"Enter roll number and registration number: "<<endl;
        cin>>rollno>>regno;
    }
    virtual void putnumber(){
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Registration number: "<<regno<<endl;
    }
};
class test: public student{
    protected:
    int part1,part2;
    public:
    void getnumber(){
        cout<<"Enter part1 and part2: "<<endl;
        cin>>part1>>part2;
    }
    void putnumber(){
        cout<<"Part 1: "<<part1<<" Part 2: "<<part2<<endl;
    }
    };
    class score:  public student{
        protected:
        int score;
        public:
        void getnumber(){
            cout<<"Enter score: "<<endl;
            cin>>score;
        }
        void putnumber(){
            cout<<"Score: "<<score<<endl;
        }
    };
    class result: public test, public score{
        public:
        void putnumber(){
            cout<<"Total: "<<part1+part2+score<<endl;
        }
    };
    int main()
    {
        result res;
        res.test::getnumber();
        res.score::getnumber();
        res.putnumber();
    }