#include <stdio.h>
#include <math.h>

int main()
{
    double x,y,z;
    printf("Enter x { -1.0 < x < 1.0; x!=(e-1)/(1+e) } -> ");
    scanf("%lf", &x);
    if (-1.0 < x && x < 1.0 && x!=(M_E-1)/(1+M_E))
    {
        y= log((1+x)/(1-x));
        z=(y*y)/(1-y);
        printf("y(x) = %lf\nz(y) = %lf\n", y, z);
    }
    else
        printf("x value is incorrect!\n");
    return 0;
}
