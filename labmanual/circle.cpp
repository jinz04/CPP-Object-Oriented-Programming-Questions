#include <iostream>
using namespace std;
class circle{
    int radius;
    const float pi=3.14;
    float area;
    public:
    void read(){
        cout<<"Enter radius of the circle: "<<endl;
        cin>>radius;
    }
    void calculate(){
        area=pi*radius*radius;
    }
    void display(){
        cout<<"The area of circle with radius="<<radius<<" is: "<<area<<endl;
    }
};
int main(){
    circle ob;
    ob.read();
    ob.calculate();
    ob.display();
    return 0;
}
