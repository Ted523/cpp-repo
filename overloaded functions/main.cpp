// overloaded functions

#include<iostream>

using namespace std;

int operate (int a, int b)
{
    return (a*b);
}

float operate(float a, float b)

{
    return (a/b);
}

int main()

{
    int n=8;
    int m=2;
    float p=15.0;
    float r=5.0;
    int x;
    float y;

    x=operate(n,m);
    cout<<x<<endl;

    y=operate(p,r);
    cout<<y<<endl;

    return 0;
}
