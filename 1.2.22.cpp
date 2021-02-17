#include <iostream>

using namespace std;

int main() {
    int n, counter = 0;
    cin >> n;
    for (int first = 1; first < 10; first++){
        for (int second = 0; second < 10; second++){
            for (int third = 0; third < 10; third++){
                if(first+second+third == n) {
                    counter++;
                    cout << first << second << third << endl;
                }
            }
        }
    }
    cout << "amount = " << counter;
    return 0;
}