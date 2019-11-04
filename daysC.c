#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 *   Program name: daysC.c
 *   Author: Ryan Kelsey

 *   Function: to print out date given on command line

 *   Execution: ./dates mm1-dd1-yyyy1 dd2-mm2-yyyy2 \n
 */

int main ( int argc, char *argv[] ) {
/* dpm, days per month */
   int dpm[12]={1, 32, 60, 91, 121, 152, 182, 213, 244 , 274, 305, 335};


   int monthLength[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   char str[10] = "";
   
   int dd1 = 0;
   int mm1 = 0;
   int yyyy1 = 0;
   int dd2 = 0;
   int mm2 = 0;
   int yyyy2 = 0;
   int numdaystart=0;
   int numdayend=0;
   int a =0;
   char day1str[3] = "11\0";
   char m1str[3] = "MM\0";
   char y1str[5] = "1111\0";
   char day2str[3] = "11\0";
   char m2str[3] = "MM\0";
   char y2str[5] = "1111\0";


   char start[11] = "";
   char end[11] = "";
int z =0;
/*argument checker, are the arguments 7? if not give an error code*/
   
   
      day1str[0] = argv[1][0];
      day1str[1] = argv[1][1];

      m1str [0] = argv[1][3];
      m1str [1] = argv[1][4];

      y1str [0] = argv[1][6];
      y1str [1] = argv[1][7];
      y1str [2] = argv[1][8];
      y1str [3] = argv[1][9];


      day2str[0] = argv[2][0];
      day2str[1] = argv[2][1];

      m2str [0] = argv[2][3];
      m2str [1] = argv[2][4];

      y2str [0] = argv[2][6];
      y2str [1] = argv[2][7];
      y2str [2] = argv[2][8];
      y2str [3] = argv[2][9];



      dd1 =   atoi ( day1str );
      mm1 =   atoi ( m1str );
      yyyy1 = atoi ( y1str);
      dd2 =   atoi ( day2str);
      mm2 =   atoi ( m2str);
      yyyy2 = atoi ( y2str);
      /*str =          argv[7];*/
      if (argc==4){
      strcpy(str, argv[3]); }
      










  if (((yyyy1%4==0) && (yyyy1%100!=0)) || (yyyy1%400==0)&&(mm2>3)){
	z=1;}

   numdaystart=(dpm[mm1-1]+dd1-1);
   numdayend=(dpm[mm2-1]+dd2-1+z);
   if (strcmp(str,"include")==0){
      a=1;
}
   else{
      a=0;
}
   if (numdayend<numdaystart){
      printf("error- your start date is after your end date)");
      exit(0);
}

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
   printf("%d",numdayend-numdaystart+a);
}
return(0);
}












	
