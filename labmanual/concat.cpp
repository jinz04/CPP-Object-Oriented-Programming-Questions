#include <iostream>
#include <string.h>
using namespace std;
class String{
    char s[100];
    public:
    void read(){
        cout<<"Enter string: "<<endl;
        cin>>s;
    }
    void display(){
        cout<<s<<endl;
    }
    
    friend String operator+(String,String);
};
String operator+(String s1, String s2)
{
 String temp;
 strcpy(temp.s,(strcat(s1.s,s2.s)));
 return temp;
} 
int main(){
    String s1,s2,s3;
    s1.read();
    s2.read();
    s3=s1+s2;
    s3.display();
}