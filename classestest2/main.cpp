//one class two objects

#include <iostream>
using namespace std;

class CRectangle
{
    int x, y;
    public:
    void set_values(int, int);
    int area()
    {
        {
            return (x*y);
        }
    }
}rect, recta;

void CRectangle::set_values(int a,int b)
{
    x=a;
    y=b;
}

int main()
{
    rect.set_values(3,6);
    recta.set_values(5,2);
    cout<<"area 1 is: "<<rect.area()<<endl;
    cout<<"area 2 is: "<<recta.area()<<endl;

    return 0;
}
