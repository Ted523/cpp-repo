#include<iostream>

using namespace std;

bool recursiveBinarySearch(int key, int values[],int firstIndex, int lastIndex);

int main()

{
    int key=40;
    int firstIndex=0;
    int values[]={37,42,49,50,52,54,56};
    int lastIndex=6;

    bool result=recursiveBinarySearch(key,values,firstIndex,lastIndex);
    cout<<"The result is:"<<result;

    return 0;
}
