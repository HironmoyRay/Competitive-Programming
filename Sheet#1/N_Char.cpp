#include <iostream>
using namespace std;

int main()
{
    char ch, x;
    cin>>ch;
    if(ch<=90){
        x=int(ch)+32;
        cout<<char(x);
    }
    else{
        x=int(ch)-32;
        cout<<char(x);
    }
    return 0;
}