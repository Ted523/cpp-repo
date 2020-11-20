// cin with strings

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string mystring;

    cout<<"What's your name?"<<endl;
    getline (cin, mystring);
    cout<<"Hi"<<mystring<<endl;

    cout<< "Where do you live?"<<endl;
    getline (cin, mystring);
    cout<<"Wow!!! That's really great. I also live in "<<mystring;

    return 0;


}
