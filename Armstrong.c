#include <stdio.h>
#include <math.h>
 
void main()
{
    int num;
    int sum = 0;
    int rem = 0;
    int cube = 0;
    int temp;
 
    printf ("enter a number");

    scanf("%d", &number);

    temp = number;

    while (number != 0)

    {
        rem = number % 10;

        cube = pow(rem, 3);

        sum = sum + cube;

        number = number / 10;
        
    }

    if (sum == temp)
        printf ("The given no is armstrong no");

    else
        printf ("The given no is not a armstrong no");

}