#include<stdio.h>
#include<conio.h>

void main()
{
   int no1, no2, o1, o2, o3, o4, o5;
   clrscr();
   printf("Enter input values:\n");
   scanf("%d%d",&no1,&no2);
   //printf("Enter input2");
   //scanf("%d",&no2);
   o1 = no1+no2;
   printf("sum of values are %d \n",o1);
   o2 = no1-no2;
   printf("difference of values : %d \n",o2);
   o3 = no1*no2;
   printf("multiplication of values : %d \n",o3);
   o4 = no1/no2;
   printf("quotient of values : %d \n",o4);
   o5 = no1%no2;
   printf("reminder of values : %d \n",o5);
   getch();
}



