#include<iostream>

using namespace std;

bool linearSearch1D (int values[], int key, int s);

int main()

{
    int key=67;
    int values[]={5,9,8,6,4,3,2};
    int s=7;
    bool result= linearSearch1D(values,key,s);
    cout<<result;

    return 0;
}
