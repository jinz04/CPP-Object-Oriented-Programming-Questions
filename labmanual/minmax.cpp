# include <iostream>
using namespace std;
class minmax;
class twovalues{
    int a,b;
    public:
    void read(){
        cout<<"Enter the value of a and b: "<<endl;
        cin>>a>>b;
    }
    friend class minmax;
};
class minmax{
public:
void findmax(twovalues ob)
{
    if(ob.a>ob.b)
    cout<<"Max value: "<<ob.a<<endl;
    else
    cout<<"Max value: "<<ob.b<<endl;
}
void findmin(twovalues ob)
{
    if(ob.a<ob.b)
    cout<<"Min value: "<<ob.a<<endl;
    else
    cout<<"Min value: "<<ob.b<<endl;
}
};
int main(){
    twovalues ob;
    minmax m;
    ob.read();
    m.findmax(ob);
    m.findmin(ob);
    return 0;
}