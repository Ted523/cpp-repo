#include<iostream>

using namespace std;

int billy []= {6,5,8,7,4};
int n;
int a;


int main()
{

   cout<<"Enter number: ";
   cin>>a;

    for(n=0;n<5;n++)
    {
        a+=billy[n];

    }
    cout<<a;
    return 0;
}
