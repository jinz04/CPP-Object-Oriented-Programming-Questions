#include <iostream>
using namespace std;
class minimum;
class number{
    int a,b;
    public:
    void setdata(){
        cout<<"Enter a and b:"<<endl;
        cin>>a>>b;
    }
    friend class minimum;
};
class minimum{
public:
int min(number ob)
{
    if(ob.a>ob.b)
    return ob.b;
    else 
    return ob.a;
}
};
int main()
{
    number ob;minimum m;
    ob.setdata();
    cout<<"minimum value:"<<m.min(ob);
}