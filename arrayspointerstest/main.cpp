#include<iostream>
using namespace std;

int main()

{

    int numbers[4]= {6,7,8,9} ;
    int *p;
    p=numbers;

    p= &numbers[0];

    cout<<p<<endl;

    return 0;
}
