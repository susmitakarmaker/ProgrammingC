#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num%2!=0)
    {
        printf("%d number is odd",num);
    }
    else
    {
        printf("%d number is even",num);
    }

    return 0;
}
