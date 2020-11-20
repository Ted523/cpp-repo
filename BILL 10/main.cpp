//Arrays, being pointers ,are passed by reference(variable itself) and not by value(copies)

# include <iostream>

using namespace std;

void bubbleSort (int values[],int size);

int main()
{
    int size;
    cout<<"Please input the size of the array."<<endl;
    cin>>size;
    cout<<"The array has"<<" "<<size<<" "<<"elements."<<endl;
    int values[size];
    cout<<"Please input the values that you want to be stored in the array."<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>values[i];
    }
    cout<<"These are the elements stored in the array."<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Index ["<<i<<"] contains"<<" "<<values[i]<<"."<<endl;

    }
    bubbleSort(values,size);
    cout<<"These are the elements stored in the array sorted in ascending order."<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Index ["<<i<<"] contains"<<" "<<values[i]<<"."<<endl;

    }
}
