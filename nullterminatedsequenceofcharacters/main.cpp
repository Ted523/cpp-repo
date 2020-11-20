#include <iostream>

using namespace std;

int main()

{
    char question[]="What is your name?:";
    char greeting[]="Hello,";
    char yourname[80];
    char question2[]="Where do you live?:";
    char place[80];
    char greeting2[]="Oh, I know ";
    char question3[]="Where were you born?:";
    char born[80];
    char greeting3[]="So you were born in ";


    {cout<<question;
    cin>>yourname;
    cout<<greeting<<yourname<<"!"<<endl;
    goto ted;
    }

    {ted:
    cout<<question2;
    cin>>place;
    cout<<greeting2<<place<<"!"<<endl;
    goto ted2;
    }

    {   ted2:
        cout<<question3;
    cin>>born;
    cout<<greeting3<<born<<"?";
    }
    return 0;
}
