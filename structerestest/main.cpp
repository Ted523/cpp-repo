#include<iostream>
#include<string>
#include<sstream>

using namespace std;

struct movies_t
{
    string title;
    int year;
}yours, mine;

void printmovie(movies_t movie);

int main()
{
    string mystring;
    mine.title= "2001- A Space Odyssey";
    mine.year=2006;

    cout<<"Enter title: ";
    getline (cin, yours.title);
    cout<<"Enter year: ";
    getline (cin, mystring);
    stringstream(mystring)>>yours.year;
    cout<<"my favorite movie is: "<<endl;
    printmovie(mine);
    cout<<"And yours is:"<<endl;
    printmovie(yours);

    return 0;


}

void printmovie(movies_t movie)
{
    cout<<movie.title;
    cout<<"("<<movie.year<<")"<<endl;

}
