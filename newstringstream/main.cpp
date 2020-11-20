#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string mystring;
    float price;
    int quantity;

    cout<<"Enter price:";
    getline (cin,mystring);

    stringstream (mystring)>>price;

    cout<<"Enter quantity:";
    getline (cin,mystring);

    stringstream (mystring)>>quantity;
    cout<<"Total price:"<<price*quantity<<endl;

    return 0;
}
