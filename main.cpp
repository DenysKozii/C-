#include <stdio.h>

using namespace std;

double n=1, res;
int i=0;

int main()
{

    while(n!=0){
        printf("a[%d]=",i);
        scanf("%lf", &n);
        i++;
        res+=n;
    }
    printf("%lf",res);
    return 0;
}
