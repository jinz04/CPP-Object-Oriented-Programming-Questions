#include <iostream>
#include <string.h>
using namespace std;
class abc
{
    string a;
    public:
    friend abc concat(abc,abc);
    void read()
    {
        cout<<"Enter string: "<<endl;
        getline(cin,a);
    }
    void disp()
    {
        cout<<"Resultant string: "<<a<<endl;
    }
};
abc concat(abc ob1,abc ob2)
{
    abc temp;
    temp.a=ob1.a+ob2.a;
    return temp;
}
int main() {
    abc ob1,ob2,ob3;
    ob1.read();
    ob2.read();
    ob3=concat(ob1,ob2);
    ob3.disp();
    return 0;
}