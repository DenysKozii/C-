#include <iostream>

using namespace std;

unsigned a(unsigned  n){
    unsigned res = 1;
    for (int i = 2; i <= 2*n; i+=2){
        res*=i;
    }
    return res;
}
unsigned b(unsigned  n){
    unsigned res = 1;
    for (int i = 1; i <= 2*n+1; i+=2){
        res*=i;
    }
    return res;
}
unsigned c(unsigned  n){
    unsigned res = 1;
    for (int i = 1; i <= n; i++)
        res*=i*i;
    return res*(n+1);
}


int main() {
    unsigned n;
    cin >> n;
    cout << a(n) << endl;
    cout << b(n) << endl;
    cout << c(n) << endl;
    return 0;
}
