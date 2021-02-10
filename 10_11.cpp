#include <iostream>
#include <cmath>

using namespace std;

int ten(double m){
    int k = 0;
    int power = 1;
    while(power <= m){
        power*=4;
        k+=1;
    }
    return k-1;
}

int eleven(double m){
    int k = 0;
    int power = 1;
    do{
        power*=2;
        k+=1;
    } while(power <= m);
    return k;
}

double m;

int main()
{
    cin >> m;
    cout << ten(m) << endl;
    cout << eleven(m) << endl;

    return 0;
}
