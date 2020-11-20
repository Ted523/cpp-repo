#include<iostream>

using namespace std;

class Rectangle
{
    private:
    int x, y;
    public:
    void specified_values(int,int);
    int area()
    {
        return (x*y);
    }

} rect, recta;

void Rectangle::specified_values (int a, int b)
{
    x=a;
    y=b;
}

int main ()

{
    int a,b;


        rect.specified_values(2,8);
        recta.specified_values(3,7);
        cout<<"The area of the first rectangle is: "<<rect.area()<<endl;
        cout<<"The area of the second rectangle is: "<<recta.area()<<endl;

        return 0;
}
