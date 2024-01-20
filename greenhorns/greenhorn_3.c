#include<stdio.h>
#include<conio.h>

main()
{
       int a=100;
       float HAR=0.1;
       float DR=0.05;
       float TA=0.08;

       clrscr();
       printf("enter your base sallary a : ");
       scanf("%d",&a);
       printf("enter HAR : %.2f\n",a*HAR);
       printf("enter DR : %.2f\n",a*DR);
       printf("enter TA : %.2f\n",a*TA);
       printf("sallary : %.2f\n",a+(a*HAR)+(a*DR)+(a*TA));
       getch();



}
