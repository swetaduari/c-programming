#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int i, j, n, result=0 ,p = 0, f = 0, total_marks[100], topper = 0, loser = 0;
    int max = 0, min = 0;
    float average_marks[100];
    printf("enter the number of student:");
    scanf("%d", &n);
    char name[n][100];
    int mar[n][3];

    for (i = 1; i <= n; i++)
    {
        printf(" \n enter the detail of %d student", i);
        printf("name:");
        scanf("%s", name[i]);

         total_marks[i] = 0;
         printf("\n enter the marks:");
    
            for (j = 1; j <= 3; j++)
            {
                
             scanf("%d", &mar[i][j]);
             total_marks[i] += mar[i][j];
        }

        average_marks[i] = 0;
        average_marks[i] = total_marks[i] / 3;

        if (average_marks[i]>= 45)
        {
        
            p++;
        }
        else
        {
            
            f++;
        }

        if (average_marks[i] > max)
        {

            max= average_marks[i];
            topper = i;
        }

        if (average_marks[i]< min)
        {

            min= average_marks[i];
            loser = i;
        }
    }
    printf("\nhighest marks:%d", max);
    printf("\nlowest marks:%d", min);
    printf("-------------student report-------------");
    printf("\n  name   total   avg   result");

    for (i = 1; i <= n; i++)
    {
        printf("\n %s      %d     %f    %s ", name[i], total_marks[i], average_marks[i], (average_marks[i] >= 40) ? "pass" : "fail");
    }
    printf("\nTopper: %s  (%f)", name[topper], average_marks[topper]);
    printf("\nLoser:  %s  (%f)", name[loser], average_marks[loser]);
    printf("\nPassed: %d", p);
    printf("\nFailed: %d", f);

}
