#include <stdio.h>

int main (){
    float a,b,c;
    double MEDIA;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    MEDIA = (a*2+b*3+c*5)/10;
    printf("MEDIA = %.1lf\n", MEDIA);
    return 0;
}