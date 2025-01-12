#include <iostream>
using namespace std;
int x=5;
class base{
    public:
    base(int x){
        cout<<"Base constructor"<<endl;
    }
    ~base(){
        cout<<"Base destructor"<<endl;
    }
    int b=0;
};
class derived:public base{
    public:
    int d=1;
    derived(int x,int y):base(y){
        cout<<"Derived constructor"<<endl;
    }
    ~derived(){
        cout<<"Derived destructor"<<endl;
    }
};
int main()
{
    base *p;
    derived d(5,7);
    return 0;
}