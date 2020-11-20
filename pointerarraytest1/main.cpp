#include<iostream>
using namespace std;

int main()

{
    int numbers[5]={3,5,6,9,8};
    int * pointer;
    int *pointer2;

    pointer=&numbers[5];
    pointer2=&numbers[4];

    cout<<pointer<<'\t'<<pointer2<<endl;
    return 0;
}
