7- Find the sum of all even and all odd numbers by using for loop.



#include <stdio.h>

  int main()
 {
     int num , i , evensum=0 , oddsum=0  ;
     
     printf("\nEnter the number");
     
     scanf("%d",&num);
     
      for(i=1;i<=50;i++)
      
      {
        if(i % 2 == 0)

         evensum = evensum + i ;

         else

         oddsum = oddsum + i ;
      } 
      
      printf("\nSum of all even numbers is\n%d",evensum);

      printf("\nSum of all odd numbers is\n%d", oddsum);

      return 0;
 }



OUTCOME - 


	 Enter the number = 50

         Sum of all even numbers is = 625
    	 Sum of all odd numbers is  = 650


