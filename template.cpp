#include <iostream>
using namespace std;
template<class T>void swaparg(T &x, T &y)
{
    T z;
    z=x;
    x=y;
    y=z;
}
void swaparg(int &x, int &y){
    cout<<"This is overloaded version"<<endl;
}
int main(){
    int a=5,b=7;
    swaparg(a,b);
    cout<<a<<" "<<b<<endl;
    char m='o',n='p';
    swaparg(m,n);
    cout<<m<<" "<<n<<endl;
    return 0;
}