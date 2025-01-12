#include <iostream>
using namespace std;
class convert{
    protected:
    float val1,val2;
    public:
    void getinit(){
        cout<<"Enter initial value: "<<endl;
        cin>>val1;
    }
    float getconvert(){
        return val2;
    }
    virtual void compute()=0;
};
class lit_to_gal:public convert{
    public:
void compute(){
    getinit();
    val2=0.26*val1;
}
void display(){
    cout<<val1<<" litres in gallons: "<<getconvert()<<endl;
}
};
class far_to_cel: public convert{
    public:
    void compute(){
        getinit();
        val2=5*(val1-32)/9;
    }
    void display(){
    cout<<val1<<" Farenheit to celcius: "<<getconvert()<<endl;
}
};
int main()
{
    lit_to_gal lg;
    far_to_cel fc;
    lg.compute();
    lg.display();
    fc.compute();
    fc.display();
}