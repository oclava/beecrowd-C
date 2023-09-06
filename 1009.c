#include <stdio.h>

int main (){
    char nome[50];
    double salario, venda;
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &venda);
    venda = venda * 0.15;
    salario = salario + venda;
    printf("TOTAL = R$ %.2lf\n", salario);

    return 0;
}