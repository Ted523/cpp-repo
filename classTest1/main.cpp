#include<iostream>

using namespace std;

class CRectangle
{
    int x,y;
    public:

    void set_values(int, int);
    int area(){return (x*y);}

}rect;

void CRectangle::set_values(int a, int b)
{
    x=a;
    y=b;
}

int main()
{
    int a,b;
    cout<<"Enter values to calculate area:"<<endl;
    cin>>a>>b;
    cout<<"There values you entered are: "<<a<<"&"<<b<<endl;
    rect.set_values(a,b);
    cout<<"The area is: "<<rect.area();


    return 0;
}
