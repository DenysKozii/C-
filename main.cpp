#include<iostream>
#include<cmath>
using namespace std;


int main()
{

    int x, y, z, a;
    cin >> a;
    x = a / 100;
    y = (a-x*100)/10;
    z = (a-x*100-y*10);
    cout << x << " " << y << " " << z << endl;
    cout << x+y+z << endl;
    cout << z << y << x;
    return 0;
}
