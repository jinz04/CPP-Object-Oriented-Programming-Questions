#include <iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    void read(){
        cout<<"Enter real part and imaginary part: "<<endl;
        cin>>real>>img;
    }
    void display(){
        cout<<"Resultant complex number: "<<real<<"+"<<img<<"i"<<endl;
    }
    friend complex operator+(complex,complex);
    friend complex operator+(int, complex);
};
complex operator+(complex ob1, complex ob2){
    complex temp;
    temp.real= ob1.real+ob2.real;
    temp.img=ob1.img+ob2.img;
    return temp;
}
complex operator+(int a, complex ob2){
    complex temp;
    temp.real= a+ob2.real;
    temp.img=ob2.img;
    return temp;
}
int main()
{
    complex ob1,ob2,ob3;
    int n;
    ob1.read();
    ob2.read();
    cout<<"Result of addition of two complex numbers: "<<endl;
    //ob3=ob1+ob2;
    (ob1+ob2).display();
    cout<<"Enter integer to be added: "<<endl;
    cin>>n;
    //ob3=n+ob1;
    (n+ob1).display();

}