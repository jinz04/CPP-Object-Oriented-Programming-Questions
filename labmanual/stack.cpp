#include <iostream>
using namespace std;
#define size 5
class stack{
    int top;
    int arr[size];
    public:
    stack()
    {
        top=-1;
    }
    stack operator+(int x);
    stack operator--();
    void display();
};
stack stack::operator+(int x)
{
    if(top==size-1)
    cout<<"Stack overflow"<<endl;
    else{
        top=top+1;
        arr[top]=x;
    }
    return *this;
}
stack stack::operator--()
{
    if(top==-1)
    cout<<"Stack Underflow"<<endl;
    else{
        cout<<"Popped element: "<<arr[top]<<endl;
        --top;
    }
    return *this;
}
void stack::display()
{
    if(top==-1)
    cout<<"Stack Underflow"<<endl;
    else{
        for(int i=top;i>=0;i--)
        cout<<arr[i]<< " "<<endl;
    }
}
int main()
{
    stack s;
    int n,choice;
    do{
        cout<<"Enter 1. Push 2. Pop 3.Display 4.Exit: "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter number to be pushed: "<<endl;
            cin>>n;
            s=s+n;
            break;
            case 2:
            --s;
            break;
            case 3:
            s.display();
            break;
        }
    }while(choice!=4);
return 0;
}