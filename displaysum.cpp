#include <iostream>
using namespace std;
class Distance{
    int cm,m;
    public:
    Distance(){};
    Distance(int a, int b)
    {
        m=a;
        cm=b;
    }
    void display()
    {
        cout<<"Distance is: "<<m<<" m "<<cm<<" cm "<<endl;
    }
    Distance sum(Distance, Distance);
};
Distance Distance::sum(Distance ob1, Distance ob2)
{
    int cm1= ob1.m*100+ob1.cm;
    int cm2=ob2.m*100+ob2.cm;
    m=(cm1+cm2)/100;
    cm=(int)(cm1+cm2)%100;
    return *this;
}
int main()
{
    Distance ob1(5,60),ob2(7,80), ob3;
    ob3.sum(ob1,ob2);
    ob3.display();
;}