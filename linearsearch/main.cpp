#include<iostream>

using namespace std;

bool linearSearch1D (int key,int values[], int s);

int main()

{
    int values[]={4,7,9,3,5,6,8};
    int key=1;
    int s=7;
    bool result= linearSearch1D(key,values,s);

    cout<<result;

    return 0;
}
