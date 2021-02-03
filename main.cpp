#include<iostream>
#include<cmath>
using namespace std;

double S(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return ((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)) / 2;

}


int main()
{
    double x1, y1, x2, y2, x3, y3;

    cin >> x1 >> y1 >> endl;

    cin >> x2 >> y2 >> endl;

    cin >> x3 >> y3 >> endl;

    cout << S(x1, y1, x2, y2, x3, y3) << endl;

    return 0;
}
