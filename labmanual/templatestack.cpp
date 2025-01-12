#include <iostream>
#define size 5
using namespace std;
template<class t> class stack{
 int top;
 t arr[size];
 public:
 stack(){
    top=-1;
 }
void push(t x);
void pop();
void display();
};
template<class t> void stack<t>:: push(t x)
{
    if(top==size-1)
    cout<<"Stack overflow"<<endl;
    else{
        top=top+1;
        arr[top]=x;
    }
}
template <class t> void stack<t>:: pop(){
    if(top==-1)
    cout<<"Stack Underflow"<<endl;
    else{
        cout<<"Popped element: "<<arr[top]<<endl;
        top=top-1;
    }
}
template <class t> void stack<t>::display(){
    if(top==-1)
    cout<<"Stack underflow"<<endl;
    else{
        for(int i=top;i>=0;i--)
        cout<<arr[i]<<endl;
    }
}
int main(){
    stack <float> s;
    float n; int choice;
    do{
        cout<<"Enter 1. Push 2. Pop 3.Display 4.Exit: "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter number to be pushed: "<<endl;
            cin>>n;
            s.push(n);
            break;
            case 2:
            s.pop();
            break;
            case 3:
            s.display();
            break;
        }
    }while(choice!=4);
return 0;
}