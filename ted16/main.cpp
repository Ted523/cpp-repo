
// stringstreams

#include<iostream>
#include<string>
#include<sstream>


using namespace std;

int main()

{
    string mystring;
    int price;
    int quantity;

    cout<<"Enter Price:"<<endl;
    getline (cin, mystring);
    stringstream (mystring)>>price;

    cout<<"Enter Quantity:"<<endl;
    getline (cin, mystring);
    stringstream (mystring)>>quantity;


    cout<<"Total Price:"<<price*quantity<<endl;

    return 0;

}
