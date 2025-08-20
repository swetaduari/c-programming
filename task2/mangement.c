#include<stdio.h>
#include<conio.h>
#include<string.h>
struct address
{
 char city[10] ;
 int pincode;
}a1;
struct Employee {
    int employeeID;
    char name[10];
    char post[20];
    int salary;
    struct address add;

}e;
struct intern{
 int internID;
 char name[10];
 char uni[20];
 int stipend;
 struct address add;
}i;

      struct Employee e1= {101,"sayan","backend-developer",30000,{"ahmedabad",3501}};
      struct Employee e2 = {102,"Sweta","database",35000,{"ahmedabad",3501}};
      struct Employee e3 = {103,"Poonam","Frontend-developer",30000,{"Rajkot",36001}};
      struct Employee e4 = {104,"Ankita","AI-ML",40000,{"ahmedabad",3501}};

      struct intern i1={201,"niha","GEC",1200,{"morbi",20910}};
      struct intern i2={202,"riha","v-GEC",1300,{"rajkot",20911}};
      struct intern i3={203,"siha","DU",1400,{"diu",209102}};
      struct intern i4={204,"diha","Atmiya",1500,{"Surat",209103}};

int main()
{ 
    int n,p,type,e,in;
      
    printf("\n which department you want to check?");
    printf("\n select 1 for HR");
    printf("\n select 2 for tech");
    scanf("%d",&n);

    switch(n)
    {
        case 1:printf("\n welcome HR");
        break;

        case 2:printf("\n welcome tech");
        break;
    }
    if(n==1)
    {
        printf("\n enter the password:");
        scanf("%d",&p);
        printf("-----------------------------");
        if(p==123)
        {
            printf("\n do you want to check for employee or intern?");

            printf("\n press 1 for employee");
            printf("\n press 2 for intern ");
            scanf("%d",&type);
            if (type==1)
            { 
               printf("\nfor which employee you want to check?");
               scanf("%d",&e);
               printf("--------------------------------------------");
            switch(e)
            {
                case 101: printf("\n name:%s \n post:%s \n salary:%d \n city:%s \n \pincode:%d",e1.name,e1.post,e1.salary,e1.add.city,e1.add.pincode);
                break;

                case 102:printf("\n name:%s \n post:%s \n salary:%d \n city:%s \n \pincode:%d",e2.name,e2.post,e2.salary,e2.add.city,e2.add.pincode);
                break;

                 case 103:printf("\n name:%s \n post:%s \n salary:%d \n city:%s \n \pincode:%d",e3.name,e3.post,e3.salary,e3.add.city,e3.add.pincode);
                break;

                case 104:printf("\n name:%s \n post:%s \n salary:%d \n city:%s \n \pincode:%d",e4.name,e4.post,e4.salary,e4.add.city,e4.add.pincode);
                break;
            }
            }
            if(type==2){

                  printf("\nfor which intern you want to check?");
               scanf("%d",&in);
               printf("\n ------------------------------------------------");
            switch(in)
            {
                case 201:printf("\n name:%s,\n university:%s,\n stipend:%d,\n city:%s \n \pincode:%d",i1.name,i1.uni,i1.stipend,i1.add.city,i1.add.pincode);
                break;
                case 202:printf("\n name:%s,\n university:%s,\n stipend:%d,\n city:%s \n \pincode:%d",i2.name,i2.uni,i2.stipend,i2.add.city,i2.add.pincode);
                break;
                case 203:printf("\n name:%s,\n university:%s,\n stipend:%d,\n city:%s \n \pincode:%d",i3.name,i3.uni,i3.stipend,i3.add.city,i3.add.pincode);
                break;
                case 204:printf("\n name:%s,\n university:%s,\n stipend:%d,\n city:%s \n \pincode:%d",i4.name,i4.uni,i4.stipend,i4.add.city,i4.add.pincode);
                break;
                 default:
                printf("no such record found");
                break;
            }
             printf("\n---------------------------------------------------");
            }

        }
        else 
        {
            printf("\n ERROR");
        }
    }
    if(n==2)
    {
        
      printf("\n enter the password:");
        scanf("%d",&p);
        printf("\n-----------------------------");
        if(p==345)


       {
               printf("\nfor which intern you want to check?");
               scanf("%d",&in);
               printf("\n------------------------------------------------");
            switch(in)
            {
                case 201:printf("\n name:%s\n university:%s\n stipend:%d\n city:%s \n \pincode:%d",i1.name,i1.uni,i1.stipend,i1.add.city,i1.add.pincode);
                break;
                case 202:printf("\n name:%s\n university:%s\n stipend:%d\n city:%s \n \pincode:%d",i2.name,i2.uni,i2.stipend,i2.add.city,i2.add.pincode);
                break;
                case 203:printf("\n name:%s\n university:%s\n stipend:%d\n city:%s \n \pincode:%d",i3.name,i3.uni,i3.stipend,i3.add.city,i3.add.pincode);
                break;
                case 204:printf("\n name:%s\n university:%s\n stipend:%d\n city:%s \n \pincode:%d",i4.name,i4.uni,i4.stipend,i4.add.city,i4.add.pincode);
                break;
                default:
                printf("\n no such record found");
                break;
                
            } 
            printf("\n---------------------------------------------------");
        }
        else
        {
            printf("\nERROR");
        }

    }

}