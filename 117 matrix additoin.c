#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],sum[2][2],i,j;
    printf("enter the first matrix elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("matrix in pocket a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nenter the second matrix elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("matrix in pocket a[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\naddition of matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}
