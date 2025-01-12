#include <iostream>
using namespace std;
class matrix{
    int rows,cols;
    int m[5][5];
    public:
    void read(){
        cout<<"Enter number of rows and columns: "<<endl;
        cin>>rows>>cols;
        cout<<"Enter the matrix elements: "<<endl;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                cin>>m[i][j];
            }
        }
    }
    void display(){
        cout<<"The matrix is: "<<endl;
         for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    int operator==(matrix);
    matrix operator+(matrix);
    matrix operator-(matrix);
};
int matrix::operator==(matrix m){
    if(rows==m.rows && cols==m.cols)
    return 1;
    else 
    return 0;
}
matrix matrix::operator+(matrix mat)
{
    matrix temp;
    temp.rows= rows;
    temp.cols=cols;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        temp.m[i][j]=m[i][j]+ mat.m[i][j];
    }
    return temp;
}
matrix matrix::operator-(matrix mat)
{
    matrix temp;
    temp.rows= rows;
    temp.cols=cols;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        temp.m[i][j]=m[i][j]- mat.m[i][j];
    }
    return temp;
}
int main(){
    matrix m1,m2,m3,m4;
    m1.read();
    m2.read();
    if(m1==m2){
    m3=m1+m2;
    m4=m1-m2;
    cout<<"Result of addition:"<<endl;
    m3.display();
    cout<<"Result of subtraction:"<<endl;
    m4.display();
    }
    else
    cout<<"Matrices not compatible"<<endl;
    return 0;
}