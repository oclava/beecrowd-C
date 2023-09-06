#include <stdio.h>
#include <math.h>
int main () {
    double x1,x2,y1,y2,raiz;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);

    x2-=x1;
    x2*=x2;
    y2-=y1;
    y2*=y2;
    x2+=y2;
    raiz = sqrt(x2);

    printf("%.4lf\n", raiz);

    
    return 0;
}