#include <iostream>

using namespace std;

double func_a(unsigned index){
    double v0 = 1, v1 = 0.3, vi;
    for(int i = 2; i <= index; i++){
        vi = (i+2) * v0;
        v0 = v1;
        v1 = vi;
    }
    return vi;
}

int main() {
    unsigned i;
    cin >> i;
    cout << func_a(i);
    return 0;
}