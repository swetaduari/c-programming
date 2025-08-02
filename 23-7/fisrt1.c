#include <stdio.h>
#include <conio.h>
int main()
{ int pri;
  float roi;
  int year;
  float interest;

    printf("enter the prinicipal amount:");
    scanf("%d",&pri);
    printf("enter the rate of interest:");
    scanf("%f",&roi);
    printf("enter the year:");
    scanf("%d",&year);

    interest=pri*roi*year/100;
    float totalamount = pri+interest;

   
    printf("the amount of interest is %f",interest);
    printf("\n the total amount is %f", totalamount);
  
}