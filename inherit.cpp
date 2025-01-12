#include <iostream>
using namespace std;
class A{
    public:
    int y;
    virtual void disp()
    {
        cout<<"Base class "<<endl;
    }
};
class B: public A{
    public:
    int x;
    void disp()
    {
        cout<<"derived class"<<endl;
    }
    void disp()
    { 
        cout<<5;
    }
};
int main()
{
    A ob1,*ptr1;
    B ob2,*ptr2;
   
    ptr1=&ob1;
    ptr1->disp();
    ptr1=&ob2;
    ptr1->disp();    
    return 0;
}