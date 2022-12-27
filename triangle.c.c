#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter the size of triangle ");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c)
    printf("\nEquilaterl triangle");
    else if(a!=b && b!=c)
    printf("\nScalene triangle");
    else
    printf("\nIsoceles triangle");
    return 0;
}