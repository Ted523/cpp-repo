#include <iostream>

using namespace std;

int addition (int a, int b)
{
    int c;
    c= a+b;
    return c;
}

int multiplic (int d, int e)
{
    int f;
    f= d*e;
    return f;
}

int main()

{
    int g;
    int h;
    int i;
    int j;
    int k;

    cout<<"Enter first number for addition operation"<<endl;
    cin>>g;
    cout<<"The number you entered is: "<<g<<endl;

    cout<<"Enter the second number for addition operation"<<endl;
    cin>>h;
    cout<<"The number you entered is: "<<h<<endl;

    i=addition(g,h);
    cout<<"The result is: "<<i<<endl;

    cout<<"enter muliplication operation number"<<endl;
    cin>>j;
    cout<<"The number you entered is: "<<j<<endl;

    k=multiplic(i,j);
    cout<<"The final result is: "<<k<<endl;

    return 0;



}
