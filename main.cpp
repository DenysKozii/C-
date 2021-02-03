#include <iostream>
#include <cmath>
using namespace std;

double f(double x){
    return pow(x+1,5);
}
int main()
{
    double x;
    cin >> x;
    cout << f(x) << endl;
    return 0;
}
