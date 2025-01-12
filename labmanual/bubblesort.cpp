#include <iostream>
using namespace std;
template<class t> void bubble(t a[], int n)
{
    t temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main(){
    int a[10],n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }  
    bubble(a,n);
        
}