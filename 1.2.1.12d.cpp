#include <iostream>

using namespace std;

int main() {
    int n;
    double s, ak;
    double a0 = 1, fct = 1, power=2;

    cin >> n;
    s = a0 * power / fct;
    for (int k = 2; k <= n; k++){
        ak = k * a0 + 1/k;
        a0 = ak;
        fct *= k;
        power *= 2;
        s += a0 * power / fct;
    }
    cout << s;
    return 0;
}