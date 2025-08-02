#include<stdio.h>
#include<conio.h>
int main(){
    int n,a,b,result;
    printf("enter the choice of algebra");
      printf("\n1.addition");
    printf("\n2.substraction");
    printf("\n3.Multiplicaton");
    printf("\n 4.Division");

    scanf("%d",&n);

    
    if(n==1){
        printf("enter the number a:");
        scanf("%d",&a);
        printf("enter the number b:");
        scanf("%d",&b);
        result=a+b;
        printf("sum=%d",result);

    }
    else if(n==2){
        printf("enter the number a:");
        scanf("%d",&a);
        printf("enter the number b:");
        scanf("%d",&b);
        result=a-b;
        printf("sum=%d",result);

    }
    else if(n==3){
        printf("enter the number a:");
        scanf("%d",&a);
        printf("enter the number b:");
        scanf("%d",&b);
        result=a*b;
        printf("sum=%d",result);

    }
    else if(n==4){
        printf("enter the number a:");
        scanf("%d",&a);
        printf("enter the number b:");
        scanf("%d",&b);
        result=a/b;
        printf("sum=%d",result);

    }
}