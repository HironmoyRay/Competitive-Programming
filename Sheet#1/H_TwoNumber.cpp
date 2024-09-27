#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b, f,c,r;
    cin>>a>>b;

    f = floor((float)a/b);
    c = ceil((float)a/b);
    r = round((float)a/b);

    cout<<"floor " << a << " / " << b << " = " << f << endl;
    cout<<"ceil " << a << " / " << b << " = " << c << endl;
    cout<<"round " << a << " / " << b << " = " << r << endl;

    return 0;
}