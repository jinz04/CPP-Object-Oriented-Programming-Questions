#include <iostream>
using namespace std;
class figure{
    protected:
    double dim1,dim2;
    public:
    virtual void area()=0;
};
class triangle:public figure{
    public:
    void read(){
        cout<<"Enter base and height of triangle: "<<endl;
        cin>>dim1>>dim2;
    }
    void area(){
        cout<<"Area of the triangle is: "<<0.5*dim1*dim2<<endl;
    }
};
class rectangle:public figure{
    public:
    void read(){
        cout<<"Enter length and breadth of rectangle: "<<endl;
        cin>>dim1>>dim2;
    }
    void area(){
        cout<<"Area of the rectangle is: "<<dim1*dim2<<endl;
    }
};
int main(){
rectangle rect;
triangle tri;
tri.read();
tri.area();
rect.read();
rect.area();
}