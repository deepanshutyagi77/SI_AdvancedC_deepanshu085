#include<stdio.h>

    int main() {

            int product_id[10]={101,102,103,104,105,106,107,108,109,110};

            char grocery_names[10]={"Milk","Bread","Butter","Cheese","Eggs","Juice","maggie","Pasta","Rice","Sugar"};


};

            int quantity[10]={10,20,15,12,18,25,30,22,28,35};
            float mrp[10]={
                25.50, 30.00, 40.00, 150.00, 12.00, 60.00, 80.00, 50.00, 45.00, 35.00
            };
            float discount[10]={
                5.00, 10.00, 15.00, 20.00, 2.00, 8.00, 12.00, 10.00, 5.00, 3.00
            };

            int 

           printf("Product ID\tGrocery Name\tQuantity\tMRP\tDiscount\n");
            for(int i=0;i<10;i++){
                printf("%d\t\t%s\t\t%d\t\t%.2f\t%.2f\n",product_id[i],grocery_names[i],quantity[i],mrp[i],discount[i]);
            }

            int product_name;
            printf("Enter the product name to search: ");
            scanf("%d",&product_name);
            int found=0;
            for(int i=0;i<10;i++){
                if(product_id[i]==product_name){
                    printf("Product found: %s\n",grocery_names[i]);
                    found=1;
                    break;
                }
            }
            if(!found){
                printf("Product not found.\n");
            };
            


            int product_id_of_clothes[10]={201,202,203,204,205,206,207,208,209,210};'
            char clothes_names[10]={"Shirt","Trousers","Jacket","Sweater","T-shirt","Jeans","Skirt","Dress","Shorts","Coat"};
            int quantity_of_clothes[10]={50,40,30,20,60,70,80,90,100,110};
            float price_of_clothes[10]={500.00, 800.00, 1200.00, 1500.00, 300.00, 700.00, 900.00, 1100.00, 400.00, 600.00};
            float discount_on_clothes[10]={50.00, 80.00, 120.00, 150.00, 30.00, 70.00, 90.00, 110.00, 40.00, 60.00};

            printf("Product ID\tClothes Name\tQuantity\tPrice\tDiscount\n");
            for(int i=0;i<10;i++){
                printf("%d\t\t%s\t\t%d\t\t%.2f\t%.2f\n",product_id_of_clothes[i],clothes_names[i],quantity_of_clothes[i],price_of_clothes[i],discount_on_clothes[i]);
            }
            int clothes_name;
            printf("Enter the product name to search: ");
            scanf("%d",&clothes_name);
            int found_clothes=0;
            for(int i=0;i<10;i++){
                if(product_id_of_clothes[i]==clothes_name){
                    printf("Product found: %s\n",clothes_names[i]);
                    found_clothes=1;
                    break;
                }
            }
            if(!found_clothes){
                printf("Product not found.\n");
            }



