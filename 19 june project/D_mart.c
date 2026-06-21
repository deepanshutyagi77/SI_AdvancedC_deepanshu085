#include <stdio.h>
int main()
{
    int productID[] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    char productName[][30] = {"Rice (5kg)","Wheat Flour (5kg)","Milk (1L)","Sugar (1kg)","Cooking Oil (1L)","Soap","Shampoo","Toothpaste","Biscuits","Soft Drink"};
    float mrp[] = {350, 280, 60, 45, 170, 40, 220, 110, 30, 90};
    float discount[] = {10, 8, 5, 3, 12, 15, 20, 10, 5, 8};
    int quantity[10] = {0};
    int choice, qty;
    int i, found;
    float total = 0, finalPrice, discountAmount, subtotal;
    printf("\n=========== DMART PRODUCT LIST ===========\n");
    printf("---------------------------------------------------------------\n");
    printf("ID\tProduct\t\t\tMRP\tDiscount\n");
    printf("---------------------------------------------------------------\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d\t%-20s\t%.2f\t%.0f%%\n",
               productID[i], productName[i], mrp[i], discount[i]); }
    printf("\nEnter 0 to generate bill.\n");
    while(1)
    {
        printf("\nEnter Product ID : ");
        scanf("%d", &choice);
        if(choice == 0)
            break;
        found = 0;
        for(i = 0; i < 10; i++)
        {
            if(choice == productID[i])
            {
                found = 1;
                printf("Enter Quantity : ");
                scanf("%d", &qty);
                quantity[i] += qty;
                break;
            }
        }
        if(found == 0)
            printf("Invalid Product ID!\n");
    }
    printf("\n\n================= DMART BILL =================\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("Product\t\tQty\tMRP\tDiscount\tFinal Price\n");
    printf("-----------------------------------------------------------------------------\n");
    for(i = 0; i < 10; i++)
    {
        if(quantity[i] > 0)
        {
            discountAmount = mrp[i] * discount[i] / 100;
            finalPrice = mrp[i] - discountAmount;
            subtotal = finalPrice * quantity[i];
            printf("%-20s %d\t%.2f\t%.2f\t\t%.2f\n",productName[i],quantity[i],mrp[i],discountAmount,subtotal);total += subtotal;}
    }
    printf("-----------------------------------------------------------------------------\n");
    printf("Grand Total : Rs. %.2f\n", total);
    printf("=============================================================\n");
    printf("        THANK YOU FOR SHOPPING AT DMART\n");
    printf("=============================================================\n");

    return 0;
}