#include <iostream>
using namespace std;

int main()
{
    int age,years,months,days, restDays;
    cin>>age;
    years = age/365;
    restDays = age - (years*365);

    months = restDays/30;
    days =restDays-(months*30);

    cout<<years<<" years"<<endl<<months<<" months"<<endl<<days<<" days";

    return 0;
}