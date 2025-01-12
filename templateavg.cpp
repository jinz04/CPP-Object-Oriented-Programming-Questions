#include <iostream>
using namespace std;
template <class T> T average(T *a, int n)
{
    T sum=0;
    for(int i=0;i<n;i++)
    sum+=a[i];
    return (T)sum/n;
}
int main()
{
    char carr[5]={'c','b','a','t'};
    cout<<average(carr,4)<<endl;
}