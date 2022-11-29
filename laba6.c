#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void fill(int n, int A[])
{
    int i;
    for (i = 0; i < n; i++)
        A[i] = rand () % 101 - 50;
}
int find(int A[],int n)
{   
    int i,m1=0,m2=0,m3=0,i1,i2,i3;
    for (i=0;i<n;i++)
        if (A[i]>m1)
        m1=A[i];
        i1=i;
    for (i=0;i<n;i++)
        if (A[i]>m2 && m1 != A[i])
        m2=A[i];
        i2=i;
    for (i=0;i<n;i++)
        if (A[i]>m3 && m1 != A[i] && A[i] && )
        m3=A[i];
        i3=i;
    
    return 0;          
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