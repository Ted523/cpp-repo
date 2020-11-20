//::-->known as operator of scope and is used to define a member of a class outside the class itself

#include<iostream>

using namespace std;

class CRectangle//declaration of class of type CRectangle
{
    int x,y;//by default a private access since it is declared before class specifier public
    public://class specifier
    void set_values (int,int);//only prototype declared within the class definition
    int area()//function included directly in the definition of this class
    {
        return (x*y);//function definition of function int area()
    }
};

void CRectangle::set_values(int a, int b)//function definition of protoype within class
{
    x=a;//assignnment operation
    y=b;//""
}

int main()
{
    CRectangle rect;
    rect.set_values(3,4);
    cout<<"Area is: "<<rect.area();
    return 0;
}
