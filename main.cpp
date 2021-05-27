#include <iostream>

using namespace std;

double fact(int n){
    int f = 1;
    for(int i = 1; i <=n; i++){
        f*=i;
    }
    return f;
}

double mnogochlen(double x, int n){
    double power = 1;
    double f = 1;
    double res = 0;
    for(int i = 0; i < n; i++){
        f = fact(i);
        res += power/f;
        power*= x;
    }
    return res;
}

double x;
unsigned n;

int main()
{
    cin >> x >> n;
    cout << mnogochlen(x, n) << endl;
    return 0;
}
