#include <iostream>
using namespace std;

//  1 20 15 30 -> 15 20
//  1 50 25 35 -> 25 35
// 50 60 35 55 -> 50 55
// 45 55 1 60 -> 45 55
int main()
{
    long long int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l1<=l2){
        if(r1<=r2){
            cout<<l2<<" "<<r1;
        }
        else if(r1>=r2){
            cout<<l2<<" "<<r2;
        }
        else{
            cout<<-1;
        }
    }
    else if(l1>l2){
        if(r1>=r2){
            cout<<l1<<" "<<r2;
        }
        else if(r1<=r2){
            cout<<l1<<" "<<r1;
        }
        else {
            cout<<-1;
        }
    }
    else{
        cout<<-1;
    }
    
    return 0;
}