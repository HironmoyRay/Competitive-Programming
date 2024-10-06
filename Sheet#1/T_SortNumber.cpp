#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        if(b>=c){
        cout<<c<<endl<<b<<endl<<a;
        }
        else{
        cout<<b<<endl<<c<<endl<<a;
        }
    }
    else if(b>=c && b>=a){
        if(c>=a){
            cout<<a<<endl<<c<<endl<<b; 
        }
        else{
             cout<<c<<endl<<a<<endl<<b;
        }
    }
    else if(c>=a && c>=b){
                if(a>=b){
            cout<<b<<endl<<a<<endl<<c; 
        }
        else{
             cout<<a<<endl<<b<<endl<<c;
        }
    }
    cout<<endl<<endl;
    cout<<a<<endl<<b<<endl<<c;
    return 0;
}