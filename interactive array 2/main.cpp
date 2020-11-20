#include <iostream>

using namespace std;

void printarray (int arg[], int length);

int main()

{
    int firstarray []= {36,89,90,78,89};
    int secondarray []= {67,95,85,70,65,66,45};
    printarray(firstarray,5);
    printarray(secondarray,7);
    return 0;

}

void printarray(int arg[], int length)
{
    for (int n=0; n<length; n++)
    cout<<arg[n]<<" ";
    cout<<"\n"<<"\n";
}
