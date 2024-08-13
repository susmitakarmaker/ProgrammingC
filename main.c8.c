#include <stdio.h>

int main()
{
    int i,j;
    int A[3][3];
    int B[3][3];
    int C[3][3];

    printf("Enter the elements for A matrix : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("A = ");

    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf(" %d",A[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements for B matrix : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("B = ");

    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf(" %d",B[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j]= A[i][j] + B[i][j];
        }
    }

    printf("A+B = ");

    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
          printf("%d ",C[i][j]);
        }
         printf("\n");

    }


    return 0;
}
