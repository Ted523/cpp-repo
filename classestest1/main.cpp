//simple area calculation of a rectangle
#include<iostream>

using namespace std;

class Rectangle
{
    int x, y;
    public:

    void set_values (int,int);
    int area()
    {
        return (x*y);
    }
}rect, recta;

void Rectangle::set_values(int a, int b)
{
    x=a;
    y=b;
}

int main()
{
    rect.set_values(8,9);
    recta.set_values(10,9);

    cout<<"The area is: "<<endl<<"1)-->"<<rect.area()<<endl<<"2)-->"<<recta.area()<<endl;


    return 0;
}
