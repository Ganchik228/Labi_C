#include <stdio.h>
#include <math.h>
int main()
{
    double x,f;
    int i=1;
    printf("\tx\t f(x)\n");
    printf("---------------------------\n");
    scanf("%lf",&x);
    while(i<=10)
    {
        if (x>=0 && x<=1)
        {
            f=(cos(x))*pow(M_E,pow(-x,2));
            printf("%lf",f);
            i++;
        }
    }
    return 0;
    //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//
}