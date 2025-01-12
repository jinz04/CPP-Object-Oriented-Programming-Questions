#include <iostream>
using namespace std;
class abc{
int x;
public:
void read_val(int x)
{
    this->x=x;
}
void disp_val()
{
    cout<<"Value of x is: "<<x<<endl;
}
};
int main(){
    abc obj;
    int y=10;
    for(int i=1;i<=5;i++)
    {
        y++;
        obj.read_val(y);
        obj.disp_val();
        
    }
}