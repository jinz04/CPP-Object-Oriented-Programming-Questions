#include <iostream>
using namespace std;
class matrix{
    int a[3][3],row,col;
    public:
    void read();
    void disp();
    int operator==(matrix);
    matrix operator+(matrix);
    matrix operator-(matrix);
};
void matrix::read()
{
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>row>>col;
    cout<<"Enter the matrix elements: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cin>>a[i][j];
    }
}
void matrix::disp()
{
    cout<<"The matrix is: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int matrix:: operator==(matrix b)
{
    if(row==b.row && col==b.col)
    return 1;
    else
    return 0;
}
matrix matrix:: operator+(matrix b)
{
    matrix sum;
    sum.row=row;
    sum.col=col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum.a[i][j]= a[i][j]+b.a[i][j];
        }
    }
    return sum;
}
matrix matrix:: operator-(matrix b)
{
    matrix diff;
    diff.row=row;
    diff.col=col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            diff.a[i][j]= a[i][j]-b.a[i][j];
        }
    }
    return diff;
}
int main()
{
    matrix mat1,mat2,mat3,mat4;
    mat1.read();
    mat2.read();
    if(mat1 == mat2)
    {
        mat3=mat1+mat2;
        mat4=mat1-mat2;
        cout<<"Sum is: "<<endl;
    mat3.disp();
    cout<<"Difference is: "<<endl;
    mat4.disp();
    }
    else
    cout<<"Matrices not compatible"<<endl;
    
    return 0;
}