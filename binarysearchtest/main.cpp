#include<iostream>

using namespace std;

bool linearsearch (string myfamily[], string key, int s);

int main()

{
    string myfamily[]={"Teddy","Monicah","Tracy","Samson","Sylvia"};
    string key;
    int s=5;
    bool result;


    cout<<"Enter your First Name(Ensure that the first letter is in capital):"<<endl;
    getline (cin, key);


    result=linearsearch(myfamily, key, s);

    if (result==true)

        cout<<"You are a member of this Family :-)"<<endl;

        else if (result==false)

        cout<<"Your are not a member of this Family! :-("<<endl;



    return 0;
}

bool linearsearch(string myfamily[], string key, int s)
{
    for (int i=0; i<s;i++)
    {
        if (myfamily[i]==key)
        return true;

    }

        return false;

}
