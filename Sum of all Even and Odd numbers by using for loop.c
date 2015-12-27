#include <stdio.h>

   void main()
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


 }

