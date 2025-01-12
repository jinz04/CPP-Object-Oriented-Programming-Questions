#include <iostream>
using namespace std;
class time{
    float hours;
    int mins;
    public:
    void read(){
        cout<<"Enter hours and minutes: "<<endl;
        cin>>hours>>mins;
    }
    void display(){
        cout<<"Time: "<<hours<<" "<<mins<<endl;
    }
    time add(time ob);
    time add(int x);
};
time time::add(time ob)
{
    time temp;
    float minute1= hours*60+mins;
    float minute2= ob.hours*60+ob.mins;
    temp.hours= (minute1+minute2)/60;
    temp.mins= (int)(minute1+minute2)%60;
    return temp;
}
time time::add(int x){
    time temp;
    float min=hours*60+mins;
    temp.hours=(min+x)/60;
    temp.mins=(int)(min+x)/60;
    return temp;
}
int main(){
    time t1,t2,t3; int n;
    t1.read();
    t2.read();
    t3=t1.add(t2);
    t3.display();
    cout<<"Enter integer to be added: "<<endl;
    cin>>n;
    t3=t1.add(n);
    t3.display();
    return 0;
    
}