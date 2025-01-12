#include <iostream>
using namespace std;
class Boolean
{
private:
    bool value;

public:
    Boolean(bool val)
    {
        value=val;
    }
    Boolean operator!();
    void display()
    {
       cout << (value ? "True" : "False") << endl;
    }

};
Boolean Boolean::operator!()
{
    value=!value;
    return *this;
}
int main(){
Boolean bool1(true);

}