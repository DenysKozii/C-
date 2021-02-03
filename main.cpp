#include <iostream>
#include <cmath>
using namespace std;

double f(double x){
    return pow(x, 5) + 5*pow(x, 4) + 10*pow(x, 3) + 10*pow(x, 2)+5*x+1;
}
int main()
{
    double x;
    cin >> x;
    cout << f(x) << endl;
    return 0;
}
