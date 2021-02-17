#include <iostream>
#include <cfloat>
#include <cmath>

using namespace std;

bool isNearlyZero(double x){
    return fabs(x) < DBL_EPSILON;
}

void printX(double x){
    if(x > 0)
        cout << "x = " << sqrt(x);
    else{
        cout << "no solutions in R" << endl;
        x = sqrt(-x);
        cout << "but in Complex numbers -> x = " << x << "*sqrt(-1)" << endl;
    }
}

void equation(double a, double b, double c) {
    if(isNearlyZero(a)){
        if(isNearlyZero(b)){
            if (isNearlyZero(c))
                cout << "infinity amount of x";
            else
                cout << "incorrect data";
        } else
            printX(-c/b);
    } else{
        double d = b * b - 4 * a * c;
        if(isNearlyZero(d))
            printX(-b/(2*a));
        else{
            if(d > 0){
                cout << "x1:" << endl;
                printX((-b + sqrt(d))/(2*a));
                cout << "x2:" << endl;
                printX((-b - sqrt(d))/(2*a));
            }
            else{
                cout << "no solutions" << endl;
            }
        }
    }
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    equation(a, b, c);
    return 0;
}


