#include<iostream>

using namespace std;

int billy []= {6,5,8,7,4};
int n;
int result=0;

int main()
{
    for(n=0;n<5;n++)
    {
        result+=billy[n];

    }
    cout<<result;
    return 0;
}
