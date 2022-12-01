#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int m, int a[n][m])
{
    int i, j;
    printf("Starting matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%4d", a[i][j] = rand () % 101 - 50);
        printf("\n");
    }
}
double chas(int n, int m, int a[n][m])
{
    int i,j,o,p;
    double dia=0,str,sto,ch;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            if(i==j)
                dia+=a[i][j];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            if(i==j)
                o=p=i;
                while(o<n && p<m)
                {
                    pro+=a[o][p];

                }
    }
    return dia;
}
int main ()
{
    srand(time(NULL));
    int n, m;
    printf("Number of lines n -> ");
    scanf("%d", &n);
    printf("Number of columns m -> ");
    scanf("%d", &m);
    int a[n][m];
    fill(n, m, a);
    printf("%lf\n",chas(n,m,a));
    return 0;
}