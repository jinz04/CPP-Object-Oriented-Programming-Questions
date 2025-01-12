#include <iostream>
using namespace std;
class abc{
    protected:
    int a;
    public:
    abc(int a)
    {
        this->a=a;
        cout<<"Value of a: "<<this->a<<endl;
    }
};
class mno: public abc{
    protected:
    int m;
    public:
    mno(int a, int b): abc(b)
    {
        m=a;
        cout<<"Value of m: "<<m<<endl;
    }
};
class pqr: public abc{
    protected:
    int p;
    public:
    pqr(int a, int b): abc(b)
    {
        p=a;
        cout<<"Value of p: "<<p<<endl;
    }
};
class xyz: public mno,public pqr{
    protected:
    int x;
    public:
    xyz(int a, int b, int c, int d): mno(b,d),pqr(c,d)
    {
        x=a;
        cout<<"Value of x: "<<x<<endl;
    }
};
int main()
{
    xyz obj(5,7,2,10);
}
