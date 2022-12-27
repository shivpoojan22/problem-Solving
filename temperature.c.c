#include <stdio.h>
int main()
{
    int temp;
    printf("\nEnter the temperature: ");
    scanf("%d", &temp);
    if(temp<0)
    printf("\nFreezing Weather");
    else if(temp>=0 && temp<10)
    printf("\nVery Cold Weather");
    else if(temp>=10 && temp<20)
    printf("\nCold Weather");
    else if(temp>=20 && temp<30)
    printf("\nNormal Weather");
    else if(temp>=30 && temp<40)
    printf("\nIts Hot Weather");
    else
    printf("\nIts very hot Weather");
    return 0;
}