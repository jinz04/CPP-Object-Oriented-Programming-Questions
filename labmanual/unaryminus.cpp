 #include <iostream>
 using namespace std;
 class abc{
    int x;
    public:
    void read(){
        cout<<"Enter value: "<<endl;
        cin>>x;
    }
    void display(){
        cout<<x<<endl;
    }
    friend abc operator--(abc &ob);
 };
  abc operator--(abc &ob){
   --ob.x;
   return ob; 
    
 }
 int main(){
    abc ob;
    ob.read();
    
    (--ob).display();
 }