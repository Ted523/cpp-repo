#include<iostream>
using namespace std;

int main()
{
    int a;
    int * b;
    int  ** c;

    a= 5;
    b=&a;
    c=&b;

    cout<<a<<'\t'<<b<<'\t'<<c<<endl;

    return 0;

}
