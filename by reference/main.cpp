// passing parameters by reference

#include<iostream>

using namespace std;

void duplicate(int& a, int& b, int& c)

{
    a*=2;
    b*=2;
    c*=2;
}

int main()

{
    int x=3;
    int y=4;
    int z=8;

    duplicate (x,y,z);

    cout<<"x="<<x<<",y="<<y<<",z="<<z;

    return 0;


}
