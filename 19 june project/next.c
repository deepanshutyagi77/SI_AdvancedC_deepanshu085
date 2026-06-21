#include <stdio.h>
#define SIZE 5
int main()
{
    int productId[SIZE] = {101, 102, 103, 104, 105};
    char productName[SIZE][30] = { "Laptop","Mouse", "Keyboard","Headphone",  "Pendrive"};
    int quantity[SIZE] = {10, 20, 15, 12, 30};
    float mrp[SIZE] = {55000, 800, 1500, 2500, 700};
    float discount[SIZE] = {10, 5, 8, 12, 15};
    char feature[SIZE][50] = {"Intel i5 16GB RAM","Wireless Mouse","Mechanical Keyboard","Bluetooth Headphone","USB 3.0 64GB" };
    int choice, pid, qty;
    float total = 0;
    printf("========================================\n");
    printf("       ONLINE E-INVOICE SYSTEM\n");
    printf("========================================\n\n");
    printf("Available Stock\n\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("ID\tName\t\tQty\tMRP\tDiscount\tFeature\n");
    printf("---------------------------------------------------------------------------------------------\n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d\t%-10s\t%d\t%.2f\t%.0f%%\t\t%s\n",
               productId[i], productName[i], quantity[i],
               mrp[i], discount[i], feature[i]);
    }
    printf("\n============== E-RECEIPT ==============\n");
    printf("ID\tProduct\tQty\tPrice\tAmount\n");
    printf("---------------------------------------\n");
    do
    {
        printf("\nEnter Product ID : ");
        scanf("%d", &pid);
        int found = 0;
        for(int i = 0; i < SIZE; i++)
        {
            if(productId[i] == pid)
            {
                found = 1;

                printf("Enter Quantity : ");
                scanf("%d", &qty);
                if(qty <= quantity[i])
                {
                    float price = mrp[i] - (mrp[i] * discount[i] / 100);
                    float amount = price * qty;

                    quantity[i] -= qty;
                    total += amount;
                    printf("%d\t%-10s\t%d\t%.2f\t%.2f\n",
                           productId[i], productName[i],
                           qty, price, amount);
                }
                else
                {
                    printf("Insufficient Stock!\n");
                }
                break;
            }
        }
        if(!found)
        {
            printf("Invalid Product ID!\n");
        }
        printf("\nAdd More Items?\n");
        printf("1. Yes\n");
        printf("0. No\n");
        printf("Choice : ");
        scanf("%d", &choice);
    } while(choice == 1);
    printf("---------------------------------------\n");
    printf("Total Bill = %.2f\n", total);
    printf("=======================================\n");
    printf("      THANK YOU! VISIT AGAIN.\n");
    return 0;
}