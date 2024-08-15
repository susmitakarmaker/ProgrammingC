#include <stdio.h>

int main()
{
    int x=10,y=5,sum,sub,multi,div,remainder;

    int *ptr1,*ptr2;

    ptr1=&x;
    ptr2=&y;

    sum= *ptr1 + *ptr2;
    printf("Sum = %d\n",sum);

    sub= *ptr1 - *ptr2;
    printf("Sub = %d\n",sub);

    multi= *ptr1 * *ptr2;
    printf("Multi = %d\n",multi);

    div= *ptr1 / *ptr2;
    printf("Div = %d\n",div);

    remainder= *ptr1 % *ptr2;
    printf("Remainder = %d\n",remainder);


    return 0;
}
