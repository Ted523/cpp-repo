//example of pointer operation
#include<iostream>
using namespace std;

int main()

{
    int ted=100;
    int * pointer;

    pointer=&ted;//pointer is pointing to ted and is asigned to it the value of the address that ted is stored in

    *pointer;//the value pointed by pointer(value contained within the variable that the pointer is pointing to)

    cout<<"The address is:"<<pointer<<endl;
    cout<<"The value pointed by the pointer is:"<<*pointer<<endl;
    return 0;
}
