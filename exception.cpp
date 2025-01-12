#include <iostream>
using namespace std;

void divide(double a,double b)
{
    
    if(!b) throw b;
    cout<<a/b<<endl;
}

int main(){
    double i,j;
    do{
        cout<<"Enter numerator 0 to stop"<<endl;
        cin>>i;
        cout<<"Enter denominator: "<<endl;
        cin>>j;
        try{
        divide(i,j);
    }catch(double d){
    cout<<"Denominator cannot be 0"<<endl;
}
    }while(i!=0);
    return 0;
}