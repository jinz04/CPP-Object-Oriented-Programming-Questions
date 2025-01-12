#include <iostream>
using namespace std;
void power(long n)
{
    cout<<"Square is: "<<n*n<<endl;
}
void power(int n)
{
    cout<<"Cube is: "<<n*n*n<<endl;
}
int main()
{
    /*int n;short m;
    cout<<"Enter number: "<<endl;
    cin>>n;
    power(n);
    cout<<"Enter number: "<<endl;
    cin>>m;
    power(m);*/
    power(50);
}
