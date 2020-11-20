//more than one returning value

#include<iostream>

using namespace std;

void prevnext (int x, int& prev, int& next)

{
    prev= x-1;
    next= x+1;
}

int main()

{
    int x=100;
    int y;
    int z;

    prevnext(x,y,z);

    cout<<"previous= "<<y<<",current= "<<x<<",next= "<<z;

    return 0;


}
