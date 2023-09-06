#include <stdio.h>

int main (){
    float a,b;
    double MEDIA;
    scanf("%f", &a);
    scanf("%f", &b);
    MEDIA = (a*3.5+b*7.5)/11;
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}