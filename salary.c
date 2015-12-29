6-Find the Gross salary of Sohan,


#include<stdio.h>

void main()

{
        float da,hra,bs,gs;

        printf("Enter the Basic Salary : ");

        scanf("%f",&bs);

        da=(40*bs)/100;

        hra=(20*bs)/100;

        gs=da+hra+bs;

        printf("The Gross Salary is : %f",gs);

}



OUTCOME-

	Enter the Basic Salary = 10000
	The Gross Salary is    = 4000 + 2000 + 10000
			       = 16000
