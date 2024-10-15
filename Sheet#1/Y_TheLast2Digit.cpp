#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    int x = a*b*c*d;
    int y= x%100;
    if(y<10){
        cout<<0<<y;
    }
    else{
        cout<<y;
    }
    return 0;
}