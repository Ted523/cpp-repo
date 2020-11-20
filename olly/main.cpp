#include <iostream>

using namespace std;
int life (int a,int b);//function prototype

{

    int s;
    s=a-b;
    return s;

}
int main()
{ int k;
    int i;
k=life (9,3);
i= life (10,1);
cout<<k<<", "<<i;
    return 0;
}

