#include <stdio.h>

int main(){
    float cod1, numero1, valor1;
    float cod2, numero2, valor2;
    scanf("%f %f %f", &cod1, &numero1, &valor1);
    scanf("%f %f %f", &cod2, &numero2, &valor2);
    valor1*=numero1;
    valor2*=numero2;
    valor1+=valor2;
    printf("VALOR A PAGAR: R$ %.2f\n", valor1);


    return 0;
}