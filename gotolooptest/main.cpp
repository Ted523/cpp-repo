#include<iostream>

using namespace std;

int main()

{
    int n=10;
    loop://label
    cout<<n<<", ";
    n--;
    if (n>0) goto loop;
    cout<<"FIRE!"<<endl;

    return 0;
}
