#include <stdio.h>
#include<conio.h>
int main() {
    int choice, quantity;
    char moreOrders;
    int totalAmount = 0;
    int price;
    do {
        printf("1.Pizza\t\tprice = 180rs/pcs\n");
        printf("2.Burger\tprice = 100rs/pcs\n");
        printf("3.Dosa\t\tprice = 120rs/pcs\n");
        printf("4.Idli\t\tprice = 50rs/pcs\n");
        printf("Please Enter your choose... :");
        scanf("%d", &choice);
         switch (choice) {
            case 1:
                price = 180;
                printf("\nYou have selected pizza.\n");
                break;
            case 2:
                price = 100;
                printf("\nYou have selected Burger.\n");
                break;
            case 3:
                price = 120;
                printf("\nYou have selected Dosa.\n");
            case 4:
                price = 50;
                printf("\nYou have selected Idli.\n");
                break;
            default:
                printf("Invalid choice, please select again.\n");
                price = 0;
                continue;
        }
        printf("Enter the quantity :");
        scanf("%d", &quantity);
        int amount = price * quantity;
        totalAmount += amount;
        printf("Amount : %d\n", amount);
        printf("Total Amount is = %d\n", totalAmount);
        printf("Do you want place more orders ? y & n :");
        scanf(" %c", &moreOrders);  
        if (moreOrders == 'y' || moreOrders == 'Y') {
            printf("---------- Menu ----------\n");
        }
    } 
    while (moreOrders == 'y' || moreOrders == 'Y');
    return 0;
}