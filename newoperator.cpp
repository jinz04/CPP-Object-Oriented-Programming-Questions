#include <iostream>
#include <new>
using namespace std;

class a
{
    int *x;
    public:
    void disp();
    a()
    {
        cout<<"Constructor called"<<endl;
        x= new int;
    }
    /*a(int m)
    {
        cout<<"Default constructor"<<endl;
    }*/
   a(const a &ob)
   {
    cout<<"Copy constructor"<<endl;
    x=new int;
   }
};

    void a:: disp()
    {
        cout<<x<<endl;
    }
int main()
{
    a ob1,ob2;
    ob2=ob1;
    ob1.disp();
    ob2.disp();
    return 0;
}