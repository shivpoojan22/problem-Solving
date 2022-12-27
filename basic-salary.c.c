#include <stdio.h>
int main()
{
    int basic;
    float hra, totalSalary, da, allow, pf;
    char grade;
    printf("\nEnter the basic salary: ");
    scanf("%d", &basic);
    grade='a';
    printf("\nEnter the grade: ");
    scanf("%c", &grade);
    hra=0.2*basic;
    da= 0.5*basic;
    if(grade=='A')
    allow=1700;
    else if(grade=='B')
    allow=1500;
    else 
    allow=1300;
    pf=0.11 *basic;
    totalSalary=basic+hra+da+allow-pf;
    printf("\n%d",totalSalary);
    return 0;
}