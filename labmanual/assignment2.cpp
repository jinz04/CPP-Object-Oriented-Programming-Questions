#include <iostream>
#define size 5
using namespace std;
class stack{
    int stk[size];
    int top;
    public:
    stack(){
        top=-1;
    }
    int& push();
    void pop();
    void display();
};
int& stack:: push()
{
    if(top==size-1)
    cout<<"Stack overflow"<<endl;
    else{
        top=top+1;
    return stk[top];
    }
}
void stack:: pop()
{
    if(top==-1)
    cout<<"Stack Underflow"<<endl;
    else{
        cout<<stk[top]<<" has been popped"<<endl;
        top=top-1;
    }
}
void stack:: display(){
    cout<<"Stack elements: "<<endl;
    for(int i=top;i>=0;i--)
    cout<<stk[i]<<endl;
}
int main(){
    stack s;
    int choice,value;
    do{
        cout<<"Enter 1. PUSH 2. POP 3. DISPLAY 4. EXIT: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter element to be pushed: "<<endl;
            cin>>value;
            s.push()=value;
            break;
            case 2:
            s.pop();
            break;
            case 3:
            s.display();
            break;
            default:
            cout<<"Invalid choice"<<endl;
        }
    }while(choice!=4);
}