#include <iostream>
#include <cmath>

using namespace std;

float softPlus(float x){
    return log(1 + exp(x));
}

float softPlus_derivative(float x){
    return exp(x)/(1 + exp(x));
}

float x;

int main()
{
    cin >> x;
    cout << softPlus(x) << endl;
    cout << softPlus_derivative(x) << endl;
    return 0;
}
