#include <stdio.h>
#include <math.h>
int main()
{
    double x,f;
    printf("\tx\t f(x)\n");
    printf("---------------------------\n");
    for(int i=1;i<=10;i++)
    {
        scanf("%lf",&x);
        printf("%lf\t",x);
        if (x>=0 && x<=1)
        {
            f=cos(x)*(pow(M_E,pow(x,-2)));
            printf("%lf\n",f);

        }
        else if (x>1 && x<= 2)
        {
            f=log(x+1)-sqrt(4-(x*x));
            printf("%lf\n",f);
        }
        else
        {
            printf("x ne podhodit\n");
        }
    }
    return 0;
}