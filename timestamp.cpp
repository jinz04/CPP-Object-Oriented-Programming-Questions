#include <iostream>
using namespace std;
class time
{
    int hour;
    int min;
    public:
    time add(time,time);
    void init(int hr,int mins)
    {
        hour=hr;
        min=mins;
    }
    void disp()
    {
        cout<<"Resultant timestamp: "<<hour<<" hours "<<min<<" minutes"<<endl;
    }
};
time time::add(time ob1,time ob2)
{
    
    int min1= ob1.hour*60+ob1.min;
    int min2= ob2.hour*60+ob2.min;
    int min3= min1+min2;
    hour=min3/60;
    min=min3%60;
    return *this;

}
int main()
{
    time ob1,ob2,ob3;
    ob1.init(3,49);
    ob2.init(5, 28);
    ob3.add(ob1,ob2);
    ob3.disp();
    return 0;
    
}