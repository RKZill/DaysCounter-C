#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 *   Program name: daysA.c
 *   Author: Ryan Kelsey

 *   Function: to print out date given on command line

 *   Execution: ./dates mm1 dd1 yyyy1 dd2 mm2 yyyy2 \n
 */

int main ( int argc, char *argv[] ) {
/* dpm, days per month */
   int dpm[12]={1, 32, 60, 91, 121, 152, 182, 213, 244 , 274, 305, 335};


   int monthLength[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   int z=0;
 
   int dd1 = 0;
   int mm1 = 0;
   int yyyy1 = 0;
   int dd2 = 0;
   int mm2 = 0;
   int yyyy2 = 0;
   int numdaystart=0;
   int numdayend=0;

/*argument checker, are the arguments 7? if not give an error code*/
   if ( argc < 7 ) {
      printf ( "Usage: ./dates mm1 dd1 yyyy1 dd2 mm2 yyyy2 \n" );
      exit ( 1 );
   } else {
      dd1 = atoi ( argv[1] );
      mm1 = atoi ( argv[2] );
      yyyy1 = atoi ( argv[3] );
      dd2 = atoi ( argv[4] );
      mm2 = atoi ( argv[5] );
      yyyy2 = atoi ( argv[6] );
   }
  if (((yyyy1%4==0) && (yyyy1%100!=0)) || (yyyy1%400==0)&&(mm2>3)){
	z=1;}

   numdaystart=(dpm[mm1-1]+dd1-1);
   numdayend=(dpm[mm2-1]+dd2-1+z);

/*error handling, this code determines if the days chosen arent in the month range */

   if ((mm1<=0)||(mm1>=13) ){
      printf("Error - the first month entered (%02d) is not in the proper range of (1-12)",mm1);
      exit(0);
   }

   else if ((mm2<1)||(mm2>12) ){
      printf("Error - the second month entered (%02d) is not in the proper range of (1-12)",mm2);
      exit(0);
   }

   else if ( dd1 > monthLength[mm1-1] ){
      printf("Error - you entered (%d) for a month with only %d days\n", dd1, monthLength[mm1-1]);
      exit(0);
}
   else if ( dd2 > monthLength[mm2-1] ){
      printf("Error - you entered (%d) for a month with only %d days\n", dd2, monthLength[mm2-1]);
      exit(0);
}





   else{
   printf("%d",numdayend-numdaystart);
}
return(0);
}












	
