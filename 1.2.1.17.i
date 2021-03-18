#include<iostream>
#include <cmath>

using namespace std;

double f(double x) {

    int coef = 1;
    int pow = 1;
    double powX = 1;
    double oldY = 0;
    double newY = 1;
    while (fabs(newY - oldY) > 0.0001) {
        coef++;
        pow *= -1;
        powX *= x;
        oldY = newY;
        newY = oldY + pow * coef * powX;
        cout << newY << endl;
    }
    return newY;
}

int main() {
    float x = 1;
    while(x >= 1){
        cin >> x;
    }
    cout << f(x);
}
