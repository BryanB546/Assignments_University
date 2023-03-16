#include <string.h>
#include <stdlib.h>
#include <stdio.h>



struct order {
 int orderID;
 char *customerName;
 struct items
 *orderItems[];
};


struct items {
 char *itemName;
 float price;
};


int main()
{
    FILE *fp1;
    FILE *fp;
    int totalsales = 0;
    float totalrevenue = 0;
    int Quantity[6];
    float Total = 0;
    int i;
    struct order ord;
    struct items ite;
    struct items ite1 = {"Burger", 4.99};
    struct items ite2 = {"Sandwich", 4.49};
    struct items ite3 = {"Tenders", 3.99};
    struct items ite4 = {"Fries", 1.99};
    struct items ite5 = {"Biscuits", 1.00};
    struct items ite6 = {"Soft Drinks", 0.89};

    struct items item[] = {ite1, ite2, ite3, ite4, ite5, ite6};
    printf("=====Menu===\n");
    printf("\nItems:\t\tPrices:\n");
        
        printf("Burger: \t4.99\n");
        printf("Sandwich: \t4.49\n");
        printf("Tenders: \t3.99\n");
        printf("Fries: \t1.99\n");
        printf("Biscuit: \t1.00\n");
        printf("Soft Drink: \t0.89\n");
        printf("\nConfirmation of order\n");


    for(int i = 0;i < sizeof(item)/sizeof(item[0]); i++)
    {
        printf("\n%-12s\t", item[i].itemName);
        printf("%.2f\n", item[i].price);
        printf("Insert Quantity of Item:");
        scanf("%d",&Quantity[i]);
    }
    
/*printf("\n====Order Summary===\n");
    //Below is a snippet of the customerName in which it was supposed to be written and shown.
/*printf("\nInsert Name:\n");
    scanf("%s",ord.customerName);
printf("\nName:%s\n",ord.customerName);


printf("Items \t\t\t\tAmount:\n");
    for(int j = 0;j < sizeof(item)/sizeof(item[0]);j++)
    {
    printf("\n%-12s\t", item[j].itemName);
    printf("\t\tQuantity:%d",Quantity[j]);
    
    Total += item[j].price * Quantity[j];
    }
    printf("\nTotal Cost Amount: %.2f",Total + (Total * 0.07));*/
    
    
        fp =fopen("OrderSummary.txt", "w");
    fprintf(fp,"OrderSumaary");
printf("\n====Order Summary===\n");
fprintf(fp,"\n====Order Summary===\n");



printf("Items \t\t\t\tAmount:\n");
fprintf(fp,"Items \t\t\t\tAmount:\n");

    for(int j = 0;j < sizeof(item)/sizeof(item[0]);j++)
    {
    printf("\n%-12s\t", item[j].itemName);
    fprintf(fp,"\n%-12s\t", item[j].itemName);

    printf("\t\tQuantity:%d",Quantity[j]);
    fprintf(fp,"\t\tQuantity:%d",Quantity[j]);

    Total += item[j].price * Quantity[j];
    }
    printf("\nTotal Cost Amount: %.2f",Total + (Total * 0.07));
    fprintf(fp,"\nTotal Cost Amount: %.2f",Total + (Total * 0.07));

fclose(fp);

fp1=fopen("Summary.txt","w");
fprintf(fp,"Summary");
totalrevenue += Total;
for(int i = 0;i < 6;i++) {
    totalsales += Quantity[i];
}
printf("\nAmount of Total revenue: %.2f\n",totalrevenue);
fprintf(fp1,"\nAmount of Total revenue: %.2f\n",totalrevenue);
printf("\nAmount of sales: %d\n",totalsales);
fprintf(fp1,"\nAmount of sales: %d\n",totalsales);
fclose(fp1);
}
