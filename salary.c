#include<stdio.h>
void main()
{
        float da,hra,bs,gs;
        clrscr();
        printf("Enter the Basic Salary : ");
        scanf("%f",&bs);
        da=(40*bs)/100;
        hra=(20*bs)/100;
        gs=da+hra+bs;
        printf("The Gross Salary is : %f",gs);
        getch();
}
