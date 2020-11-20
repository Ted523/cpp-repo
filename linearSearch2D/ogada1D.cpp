#include<iostream>

using namespace std;

bool linearSearch1D (int values[], int key, int s);

int main()
{
    int key=6;
    int values[]={7,8,4,5,6,9};
    int s=6;

    bool result= linearSearch1D(values, key, s);

    cout<<result;

    return 0;

}

