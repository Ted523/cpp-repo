//number echoer

#include<iostream>

using namespace std;

int main()

{
    int n;

    do
    {
        cout<<"Enter desired number"<<endl;
        cin>>n;
        if (n<0)

        cout<<"syntax error"<<endl;
        else
        cout<<n;
        cout<<"The number you entered is:"<<n<<endl;

    }
    while (n!=0);



    return 0;
}
