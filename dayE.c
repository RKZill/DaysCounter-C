#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 *   Program name: daysE.c
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
   int i1 =0;
   int i2 =0;
   int leapc =-1;
   int free6ix9ine=0;
   char start[11] = "";
   char end[11] = "";
   int b=0;
   int c=0;
   char hypencheck1[2] = "1\0";
char hypencheck2[2] = "1\0";
char hypencheck3[2] = "1\0";
char hypencheck4[2] = "1\0";
/*argument checker, are the arguments 7? if not give an error code*/
   
   
      day1str[0] = argv[1][0];
      day1str[1] = argv[1][1];
      hypencheck1[0] = argv[1][2];
      m1str [0] = argv[1][3];
      m1str [1] = argv[1][4];
hypencheck2[0] = argv[1][5];
      y1str [0] = argv[1][6];
      y1str [1] = argv[1][7];
      y1str [2] = argv[1][8];
      y1str [3] = argv[1][9];


      day2str[0] = argv[2][0];
      day2str[1] = argv[2][1];
hypencheck3[0] = argv[2][2];
      m2str [0] = argv[2][3];
      m2str [1] = argv[2][4];
hypencheck4[0] = argv[2][5];
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
      if ((strcmp(hypencheck4,"-")!=0)||(strcmp(hypencheck3,"-")!=0)||(strcmp(hypencheck2,"-")!=0)||(strcmp(hypencheck1,"-")!=0)){
      printf ( "Usage: ./dates dd1-mm1-yyyy1 dd2-mm2-yyyy2 \n" );
exit(0);}

if (((yyyy1%4==0) && (yyyy1%100!=0)) || (yyyy1%400==0)){
	monthLength[1]=29;

}
if (((yyyy2%4==0) && (yyyy2%100!=0)) || (yyyy2%400==0)){
	monthLength[1]=29;
}



    i2=yyyy2;
    for (i1=yyyy1; i1<=i2; i1++) {
       if (((i1%4==0) && (i1%100!=0)) || (i1 %400==0)){
           leapc=leapc+1;
}

       else{
}
}
     if  ( dd2==29&&mm2==2 ){leapc=leapc-1;}
     if (yyyy2>yyyy1){b=1;}

   free6ix9ine =(((yyyy2-yyyy1) *365)+ leapc);
   numdaystart=(dpm[mm1-1]+dd1-1);
   numdayend=(dpm[mm2-1]+dd2-1);
   if (strcmp(str,"include")==0){
      a=1;
}
   else{
      a=0;
}
   if ( (numdayend < numdaystart ) && (yyyy2<yyyy1)){
      printf("error- your start date is after your end date");
	  printf("(%02d)",numdaystart);

      exit(0);
}
   if ((numdayend-numdaystart)<0)
	c=0;

/*error handling, this code determines if the days chosen arent in the month range */
   if ((mm1<1)||(mm1>12) ){
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

   else if ((numdayend-numdaystart+a+b+c+ free6ix9ine)<0){
      printf("error- your start date is after your end date)");

      exit(0);}

   else{
   printf("%d",numdayend-numdaystart+a+b+c+free6ix9ine);
}

return(0);
}


