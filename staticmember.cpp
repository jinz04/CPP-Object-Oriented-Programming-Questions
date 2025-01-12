#include <iostream>
using namespace std;
class AB{
    public:
    int a;
    static int b;
    public:
    volatile static void read(){
        cin>>b;
    }
    void disp(){
        cout<<this->a<<endl;
    }
};
int AB::b;
int main(){
    AB obj1,obj2;
    obj1.read();
    obj1.disp();
    return 0;
}