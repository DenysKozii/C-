#include <iostream>
#include <cfloat>
#include <cmath>

using namespace std;


bool isEqual(double x, double y){
    return fabs(x-y) < DBL_EPSILON;
}

double triangle_area(int x1, int y1, int x2, int y2, int x3, int y3){
    return ((x1*y2 + x2*y3 + x3*y1)-(x1*y3 + x2*y1 + x3*y2))/2.0;
}

void inside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y){
    double s = triangle_area(x1, y1, x2, y2, x3, y3);
    double s1 = triangle_area(x, y, x2, y2, x3, y3);
    double s2 = triangle_area(x1, y1, x, y, x3, y3);
    double s3 = triangle_area(x1, y1, x2, y2, x, y);
    if (isEqual(s,s1 + s2 + s3))
        cout << "inside";
    else
        cout << "outside";
}

int main() {
    int x1, x2, x3, y1 ,y2, y3, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cin >> x >> y;
    inside(x1, y1, x2, y2, x3, y3, x, y);
    return 0;
}