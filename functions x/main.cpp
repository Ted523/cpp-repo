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
    int z;
    int y;

    z=multiplic(9,7);
    cout<<"The first result is "<<z;

    y=addition(z,100);
    cout<<"The final result "<<y;

    return 0;


}
