#include <iostream>
using namespace std;
class DB;
class DM{
    int m,cm;
    public:
    void read(){
        cout<<"Enter distance in metre and centimetre: "<<endl;
        cin>>m>>cm;
    }
    void display()
    {
        cout<<"Distance is: "<<m <<"m "<<cm<<"cm "<<endl;
    }
    friend DM add(DM,DB);
};
class DB{
    int feet,in;
    public:
    void read(){
        cout<<"Enter distance in feet and inches: "<<endl;
        cin>>feet>>in;
    }
    void display(){
        cout<<"Distance is: "<<feet<<"feet "<<in<<"inches"<<endl;
    }
    friend DM add(DM,DB);
};
DM add(DM dm, DB db)
{
    DM temp;
    float inches,centi;
    inches=db.feet*12+db.in;
    centi=(dm.m*100)+dm.cm+(inches*2.5);
    temp.m=centi/100;
    temp.cm=(int)centi%100;
    return temp;
}
int main()
{
    DM dm,res;
    DB db;
    dm.read();
    db.read();
    res= add(dm,db);
    res.display();
}