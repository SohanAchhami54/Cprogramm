#include<stdio.h>
void main()
{
    int a[3][3],transpose[3][3],i,j;
    printf(" enter first matrix elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("elements in pocket a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("first matrix elements:\n");
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }
    printf("transpose of matrix:\n");
    {
         for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                transpose[j][i]=a[i][j];
            }

        }
    }
     for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d\t",transpose[i][j]);
            }
            printf("\n");
        }

}
