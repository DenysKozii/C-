#include <iostream>

#include <stdio.h>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double x = 1/a;
    double y = 1/b;
    printf("arifm = %e, geom= %e\n", (a+b)/2,2/(x+y));
    cout << (a+b)/2 << " "<< 2/(x+y) << endl;
    return 0;
}
