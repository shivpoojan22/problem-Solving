// Largest number
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter the three number");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
        if(a>c)
        printf("\n%d is greater", a);
        else
        printf("\n%d is greater", c);
    }
    else
    {
        if(b>c)
        printf("\n%d is greater", b);
        else
        printf("\n%d is greater", c);
    }
    return 0;
}