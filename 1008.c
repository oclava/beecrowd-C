#include <stdio.h>

int main (){
    int n, h;
    float d;
    scanf("%d", &n);
    scanf("%d", &h);
    scanf("%f", &d);

    d = d*h;

    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2f\n",d);

    return 0;
}