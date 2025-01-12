#include <iostream>
using namespace std;
void volume(int side)
{
    cout<<"Volume of cube: "<<side*side*side<<endl;
}
void volume(int radius, int height)
{
    cout<<"Volume of cylinder: "<<3.14*radius*radius*height<<endl;
}
void volume( float pi,float radius)
{
    cout<<"Volume of sphere: "<<4/3*pi*radius*radius<<endl;
}
int main() {
    /*int side,rad,height;
    float radius;
    cout<<"Enter side of cube: "<<endl;
    cin>>side;
    volume(side);
    cout<<"Enter radius and height of cylinder: "<<endl;
    cin>>rad>>height;
    volume(rad,height);
    cout<<"Enter radius of sphere: "<<endl;
    cin>>radius;
    volume(3.14,radius);*/
    volume(5,5);
    


    return 0;
}