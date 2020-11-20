#include<iostream>

using namespace std;


bool binarySearch(int key,int values[], int s);

int main()
{
    int values[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    int key=16;
    int s=17;





    bool result= binarySearch(key,values,s);
    cout<<"The result is:"<<" "<<result;

    return 0;


}

