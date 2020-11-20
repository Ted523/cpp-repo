#include<iostream>



using namespace std;

int main()
{
    double charge;
    double unit;
    double newcharge;
    string user;


    cout<<"Please enter the name of the user: "<<endl;
    cin>>user;
    cout<<"Please enter the number of units used by "<<user<<" : "<<endl;
    cin>>unit;
    {
        if (unit<=200)
        {
            charge=(0.8*unit)+100;
        }
        else if (unit<=300)
        {
            charge=(0.9*unit)+100;
        }
        else if(unit>300)
        {
            charge=(1*unit)+100;
        }
    }
    if (charge>400)
    {
        charge=((0.15*charge)+charge);
    }
    cout<<"\nDetails for user ("<<user<<")\n\n"<<"Units consumed: "<<unit<<"units\n\nTotal Charges: Rs"<<charge<<"\n";


    return 0;

}
