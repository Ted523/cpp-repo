//array of structures
#include<iostream>
#include<string>
#include<sstream>

using namespace std;
#define N_MOVIES 1


struct movies_t
{
    string title;
    int year;
}films[N_MOVIES];

void printmovie (movies_t movie);

int main()
{
    string mystring;
    int n;

    for (n=0;n<N_MOVIES;n++)
    {
        cout<<"Enter title:";
        getline(cin, films[n].title);
        cout<<"Enter year:";
        getline (cin, mystring);
        stringstream (mystring)>>films[n].year;

    }

    cout<<"You have entered these movies: "<<endl;

    for(n=0;n<N_MOVIES;n++)
    printmovie(films[n]);
    return 0;
}

    void printmovie(movies_t movie)
    {
        cout<<movie.title;
        cout<<"("<<movie.year<<")"<<endl;
    }
