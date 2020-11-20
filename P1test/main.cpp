#include<iostream>
#include<cmath>// this preprocessor directive includes all needed from the cmath library

using namespace std;

bool quadraticFormula (int a, int b,int c, int totalResults[]);//function prototype declaration for the quadraticFormula function

int main()
{
  int a, b, c;

 int x[2];//stores the result of x

  cout<<"From your equation (ax^2+bx+c), please enter the values of a,b and c to get the result of x:"<<endl;
  cout<<"a:";
  cin>>a;

  cout<<"b:";
  cin>>b;

  cout<<"c:";
  cin>>c;

  if (quadraticFormula(a,b,c,x))//if statement that checks condition and if true calls the quadraticFormula function
  {
      cout<<"\nYour Results are:"<<endl;
      cout<<"x="<<x[0]<<endl;//statement for printing out the first computed result of x
      cout<<"x="<<x[1]<<endl;//statement for printing out the second computed result of x
  }

  cin.get();
  return 0;


}

bool quadraticFormula (int a, int b,int c, int totalResults[])//Function definition for the quadraticFormula function
{
    if (((b*b)-(4*a*c))<0)//if statement that includes one of the rules from the question[7.10c-->There are no real roots, if (b^2-4ac) is negative.]
    {
        cout<<"\nNo real roots! (b^2-4ac) is a negative."<<endl;
        return false;
    }

   int numeratorSqrtResult= sqrt((b*b)-(4*a*c));//variable that takes care of the numerator part of the quadratic formula
   int denominatorResult= 2*a;//variable that takes care of the denominator part of the quadratic formula
    int addnegativeTo_b= 0-b;//variable that takes care of the [-b] part of the quadratic formula

    if (b==0 && a==0)//if statement that includes one of the rules from the question[7.10a-->No solution, if both a and b are 0
    {
        cout<<"\nNo result!Both a and b are zero!"<<endl;
        return false;
    }

    if (a==0)//if statement that includes one of the rules from the question[7.10b-->There is only one root , if a=0(x=-c/b)
    {
        totalResults[0]=(-c/b);

        return totalResults;
}
        totalResults[0]=(addnegativeTo_b+numeratorSqrtResult)/denominatorResult;//variable that has stored in it the result of the computation of the right side of the quadratic formula when sign is +
        totalResults[1]=(addnegativeTo_b-numeratorSqrtResult)/denominatorResult;//variable that has stored in it the result of the computation of the right side of the quadratic formula when sign is -

        return true;
}
