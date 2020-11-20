#include <iostream>

using namespace std;

bool linearSearch2D (int key, int value[6][5], int rows, int cols);

int main()

{
    int key=23;
    int value[6][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int rows=6;
    int cols=5;
    bool result=linearSearch2D(key,value,rows,cols);
    cout<<result;
    return 0;
}

