#include <iostream>
using namespace std;
class abc
{
    int a,b;
    public:
    void read();
    void disp();
   friend abc operator++(abc&);//for prefix
   friend abc operator++(abc&,int x);//for postfix
};
void abc::read()
{
    cout<<"Enter 2 numbers:"<<endl;
    cin>>a>>b;
}
void abc::disp()
{
    cout<<"A and B are: "<<endl;
    cout<<a<<endl<<b<<endl;
}
abc operator++(abc &ob)
{
    ++ob.a;
    ++ob.b;
    return ob;
}
abc operator++(abc &ob,int x)//dummy parameter
{
    ++ob.a;
    ++ob.b;
    return ob;
}
int main()
{
    abc ob1,ob2;
    ob1.read();
     ++ob1;
    ob1.disp();
    ob2.read();
    ob2++;
    ob2.disp();
    return 0;
}