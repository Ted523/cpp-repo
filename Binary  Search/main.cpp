#include <iostream>

using namespace std;

bool  binarySearch(int key,int values[],int s);



int main()
{
    int key;
    cout<<"Enter number:"<<endl;
    cin>>key;
    int values[]={1,2,3,4,5,6,7,8,9};
    int s=9;
    bool result= binarySearch(key,values,s);
    cout<<"The result is:"<<""<<result;


    return 0;
}
