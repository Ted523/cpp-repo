#include <iostream>

using namespace std;

class CRectangle{
    int x, y;
    public:
    void set_values(int, int);
    int area(){return (x*y);}

}rect, rectb, rectc;

void CRectangle::set_values(int a, int b){

    x=a;
    y=b;

}

int main()
{
    rect.set_values(3,5);
    rectb.set_values(4,6);
    rectc.set_values(10,2);

    cout<<"Area is: "<<rect.area()<<endl;
    cout<<"Area a is: "<<rectb.area()<<endl;
    cout<<"Area b is: "<<rectc.area();
    return 0;
}
