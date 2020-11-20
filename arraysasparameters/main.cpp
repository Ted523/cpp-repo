//arrays as parameters
#include<iostream>
using namespace std;

void printarray (int arg[], int length)
{
    for (int n=0; n<length; n++)


        cout<<arg[n]<<" ";
        cout<<endl;


}

int main()

{
    int firstarray[]= {3,4,7};
    int secondarray[]= {5,8,9,0,7,2,1};
    printarray(firstarray, 2);
    printarray(secondarray, 3);

    return 0;
}
