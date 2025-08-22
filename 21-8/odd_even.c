#include<stdio.h>
#include<conio.h>

int main() 
{
    FILE *f1, *f2, *f3;

    int n, num, i;

   
    f1 = fopen("f1.txt" , "w" );
    f2 = fopen("f2.txt" , "w" );
    f3 = fopen("f3.txt" , "w" );

    printf("Enter the number n : ");
    scanf("%d",&n);

    
    for (i = 0; i <n; i++)
    {
        printf("\nEnter %d number  : ", i+1);
        scanf("%d", &num);
        fprintf( f1, "\n%d", num);

        if (num % 2 == 0)
            fprintf( f2, "\n%d", num); 
        else
            fprintf( f3, "\n%d", num);
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}