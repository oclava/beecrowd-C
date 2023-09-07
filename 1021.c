#include <stdio.h>
#include <math.h>

int main (){
    double dinheiro;
    int cem=0,cinquenta=0,vinte=0,dez=0,cinco=0,dois=0,mUm=0;
    double mCinquenta=0,mVinteecinco=0,mDez=0,mCinco=0, mUmcentavo=0;

    scanf("%lf",&dinheiro);

    cem = dinheiro/100;
    dinheiro = fmod(dinheiro, 100);
    printf("%d nota(s) de R$ 100.00\n", cem);

    cinquenta = dinheiro/50;
    dinheiro = fmod(dinheiro ,50);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);

    vinte = dinheiro/20;
    dinheiro = fmod(dinheiro, 20);
    printf("%d nota(s) de R$ 20.00\n", vinte);

    dez = dinheiro/10;
    dinheiro = fmod(dinheiro , 10);
    printf("%d nota(s) de R$ 10.00\n", dez);

    cinco = dinheiro/5;
    dinheiro = fmod(dinheiro, 5);
    printf("%d nota(s) de R$ 5.00\n", cinco);

    dois = dinheiro/2;
    dinheiro = fmod(dinheiro, 2);
    printf("%d nota(s) de R$ 2.00\n", dois);

    mUm = dinheiro/1.0;
    printf("%d moeda(s) de R$ 1.00\n",mUm);

    dinheiro = fmod(dinheiro, 1);
    mCinquenta = dinheiro/0.5;
    printf("%.0lf moeda(s) de R$ 0.50\n", mCinquenta);

    dinheiro = fmod(dinheiro, 0.5);
    mVinteecinco = dinheiro/0.25;
    printf("%.0lf moeda(s) de R$ 0.25\n", mVinteecinco);

    dinheiro = fmod(dinheiro, 0.25);
    mDez = dinheiro/0.10;
    printf("%.0lf moeda(s) de R$ 0.10\n", mDez);

    dinheiro = fmod(dinheiro, 0.100);
    mCinco = dinheiro/0.05;
    printf("%.0lf moeda(s) de R$ 0.05\n", mCinco);

    dinheiro = fmod(dinheiro, 0.05);
    mUmcentavo = dinheiro/0.01;
    printf("%.0lf moeda(s) de R$ 0.01\n", mUmcentavo);
    
    
    return 0;
}