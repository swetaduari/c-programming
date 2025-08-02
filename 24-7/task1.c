#include<conio.h>
#include<stdio.h>

int main(){
    int n;
    printf("Enter the day:");
    scanf("%d",&n);
  
  
    if(n==1)
    {
        printf("monday");
    }
     else if(n==2)
    {
        printf("Tuesday");
    }
     else if(n==3)
    {
        printf("wednesday");
    }
    else if(n==4)
    {
        printf("Thursday");
    }
     else if(n==5)
    {
        printf("Friday");
    }
    else if(n==6)
    {
        printf("Saturday");
    }
   else if(n==7){
    printf("sunday");
   }
  
  else{
   printf("\n enter a valid day");
  }
}