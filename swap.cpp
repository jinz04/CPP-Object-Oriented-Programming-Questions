#include <iostream>
using namespace std;
class B;
class A{
    int x;
    public:
    void read()
    {
        cout<<"Enter x: "<<endl;
        cin>>x;
    }
    void disp()
    {
        cout<<"x: "<<x<<endl;
    }
    friend void swapval(A&, B&);
};
class B{
    int y;
    public:
    void read()
    {
        cout<<"Enter y: "<<endl;
        cin>>y;
    }
    void disp()
    {
        cout<<"y: "<<y<<endl;
    }
    friend void swapval(A&, B&);
};
void swapval(A &a, B &b)
{
    int temp;
    temp=a.x;
    a.x=b.y;
    b.y=temp;
}
int main()
{
    A a;B b;
    a.read();
    b.read();
    swapval(a,b);
    a.disp();
    b.disp();
}