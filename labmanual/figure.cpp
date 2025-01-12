#include <iostream>
using namespace std;
class figure{
    protected:
    double dim1,dim2;
    public:
    virtual void area(){}
};
class Triangle: public figure{
    public:
    void area()
    {
        cout<<"Enter the base and height of triangle: "<<endl;
        cin>>dim1>>dim2;
        cout<<"Area of triangle is: "<<0.5*dim1*dim2<<endl;
    }
};
class Rectangle: public figure{
    public:
    void area(){
        cout<<"Enter length and breadth of rectangle: "<<endl;
        cin>>dim1>>dim2;
        cout<<"Area of rectangle is: "<<dim1*dim2<<endl;
    }
};
int main(){
    figure *p;
    Triangle tri;
    Rectangle rect;
    p=&tri;
    p->area();
    p=&rect;
    p->area();
}