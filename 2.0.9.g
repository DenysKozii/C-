#include <iostream>

using namespace std;
int N;

bool isFibonacci(unsigned num) {
    int f1 = 1;
    int f2 = 1;
    int f3 = 2;
    while (f3 < num){
        f3 = f2 + f1;
        f1 = f2;
        f2 = f3;
    }
    return num == 1 || num == 2 || f3 == num;
}

int f(unsigned arr[]) {
    int res = 0;
    for (int i = 0; i < N; i++)
        if (isFibonacci(arr[i]))
            res++;
    return res;
}

int main() {
    cout << "N=";
    cin >> N;
    unsigned arr[N];

    for (int i = 0; i < N; ++i) {
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
    cout << f(arr);
}
