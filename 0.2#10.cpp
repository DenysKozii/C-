#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r, h, v;
    cout << "radius and height ";
    cin >> r >> h;
    v = (M_PI*r*r*h)/3;
    cout << "Result = " << v;
    return 0;
}
