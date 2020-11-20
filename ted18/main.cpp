//number echoer

#include<iostream>

using namespace std;

int main()

{
    unsigned long n;

    do
    {
        cout<<"Enter desired number"<<endl;
        cin>>n;
        cout<<"The number you entered is:"<<n<<endl;
    }
    while (n!=0);
    if (n<0)

        cout<<"syntax error"<<endl;
        else
        cout<<n;


    return 0;
}
