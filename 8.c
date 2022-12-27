#include <stdio.h>
int main()
{
    int x, y;
    printf("\nEnter the coordinate of x and y: ");
    scanf("%d %d", &x, &y);
    if(x>0)
    {
        if(y>0)
        printf("\nFirst Quadrant");
        else
        printf("\nFourth Quadrant");
    }
    else
    {
        if(y>0)
        printf("\nSecond Quadrant");
        else
        printf("\nThird Quadrant");
    }
    return 0;
}