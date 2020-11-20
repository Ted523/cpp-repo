//example of a switch statement

#include <iostream>

using namespace std;

int main()

{
   int x=0;
   cout<<"Enter number:";
   cin>>x;

   switch (x)

   {case 1:
   cout<<"x is"<<x;
   break;

   case 2:
   cout<<"x is"<<x;
   break;

   default:

   cout<<"x is not valid";}
  return 0;
}
