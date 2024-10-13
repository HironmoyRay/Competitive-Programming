#include <iostream>
using namespace std;

int main()
{
    long long int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    int intSecStart = max(l1,l2);
    int intSecEnd = min(r1,r2);
    if(intSecStart<=intSecEnd){
        cout<<intSecStart<<" "<<intSecEnd;
    }
    else{
        cout<<-1;
    }
    
    return 0;
}