#include <stdio.h>

void number(int row)
{
    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for(int star=1;star<=2*i-1;star++)
        {
            printf("*");
        }
        for(int j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    number(n);

    return 0;
}
