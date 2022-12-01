#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void fill(int n, int A[])
{
    int i;
    for (i = 0; i < n; i++)
        A[i] = rand () % 101 - 50;
}
int main()
{
    int n,i,max,index;
    srand(time(NULL));
    printf("Vvedite kollichestvo elementov\t");
    scanf("%d",&n);
    int A[n];
    fill(n,A);
    for(i=0;i<n;i++)
        printf("%4d",A[i]);
    printf("\n");
    find(A,n);
    printf("%d\t%d",max, index);
}