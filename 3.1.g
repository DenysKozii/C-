#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;


int main()
{

    char str[255];
    std::string res;
    cin >> str;
    for(int i = 0; i < strlen(str); i++){
        if (str[i] == 'p' && str[i+1] == 'h'){
            res += 'f';
            i++;
        } else{
            res += str[i];
        }
    }
    cout << res;
    return 0;
}
