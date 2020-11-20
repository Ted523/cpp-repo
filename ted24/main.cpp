//continue loop
#include <iostream>

using namespace std;

int main()

{
    int n;
    cout<<"Enter number:";
    cin>>n;

    for (n; n>0; n--)
    {
        if (n==5) continue;

        cout<<n<<",";


    }
    cout<<"FIRE!!!"<<endl;

    return 0;
}
