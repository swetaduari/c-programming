#include<conio.h>
#include<stdio.h>
 
int main()
{
    int a,b,c,d,e;
    printf("enter the marks of subject1:");
    scanf("%d",&a);
    printf("enter the marks of subject2:");
    scanf("%d",&b);
    printf("enter the marks of subject3:");
    scanf("%d",&c);
    printf("enter the marks of subject4:");
    scanf("%d",&d);
     printf("enter the marks of subject5:");
    scanf("%d",&e);
    int sum=a+b+c+d+e;
   int percentage=sum/500*100;
   printf("the percentage of subject is %d",percentage);
}