#include <stdio.h>

int main (){
    float hora, km, consumo = 12;
    scanf("%f", &hora);
    scanf("%f", &km);
    km*=hora;
    km/=consumo;
    printf("%.3f\n",km);
    return 0;
}