#include<iostream>

using namespace std;

int main()

{

    int i;
    int a=i/4;

    for (i=0; i<100; i+=6)
    {
        if (a!=0)
        {
            cout<<i<<endl;
        }
        else if (a==0)
        {
            cout<<"null"<<endl;
        }


    }





    return 0;
}
