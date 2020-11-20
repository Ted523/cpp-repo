#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

#define n 102
bool linearSearch1D(int values[], int key, int s)

{
    for (int i=0; i<s; i++)
     {
         if(values[i]==key)
         return true;
     }

     return false;
}


int main()
{
    clock_t begin = clock();

    bool result;
    int key;


    srand (time(NULL));

    int* values = new int[n];

    for(int i = 0; i < n; i++)
    {
        values[i] = rand() % 100;
    }

    values[n - 1] = 101;

    key = 101;

    begin = clock();

    result = linearSearch1D(values, key, n);

    clock_t end = clock();
    double elapsed_secs = double(end - begin);


    cout << "Algorithm run-time in clocks: " << elapsed_secs << endl;

    if (result == true)
        cout << "The key was found!" << endl;
    else
        cout << "The key was not found!" << endl;

    return 0;
}

