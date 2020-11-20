// basic standard input/output implementation

#include<iostream>

using namespace std;

#define PI 3.14159

int main()

{
    double r;
    double circle;
    double area;

    cout<< "Insert your desired radius:"<<endl;
    cin>>r;
    cout<<"This is the radius you entered:"<<r<<endl;

    circle= 2*PI*r;

    cout<<"The circumference of your circle is:"<<circle<<endl;

    area= PI*r*r;

    cout<<"The area of your circle is:"<<area<<endl;

    return 0;




}
