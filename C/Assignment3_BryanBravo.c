//Bryan Bravo 
//Date:2/9/22
//Panther ID:6059483
//Assignment 3: Pointers
#include <stdio.h>
#include <stdlib.h>

//Function Signature
void input(char*,float*,int*,int);
void calculate_bill(float*,int*, float* amount,int);
void display(char*, float*,int*,int,float*);



void main() {
//Arrays for products and prices and other info below
char products[6] = {'K', 'M', 'P', 'U', 'D', 'C'};
float prices[] = {12.50,8.25,35.00, 7.99, 47.25,18.75};
int size = 6;
int qty[size];
int i = 0;
float bill_amount = 0;
float *amount = &bill_amount;
float stax = 0.07;
float salestax;

//Function references
input(products,prices,qty,size);
calculate_bill(prices,qty,amount,size);
display(products,prices,qty,size,&bill_amount);
 
}
//Void input function//
void input(char* products,float* prices,int* qty,int size) {
 for(int i=0;i < size;i++) {
        printf("\nEnter qty for product %c, the price is $%.2f: ",products[i],prices[i]);
        scanf("%d",&qty[i]);
        
    }

}

//void calculate_bill function//
void calculate_bill(float* prices, int* qty,float* amount,int size) {
    for(int i=0;i < size;i++) {
       *amount += prices[i] * qty[i];
   } 
}

//void display function- Displays subtotal, total bill amount, sales tax, and Total Payable//
void display(char* products, float* prices,int* qty,int size,float* bill_amount) {
    for(int i=0;i < size;i++) {
        printf("\n%c product has $%.2f price and %d quantity is selected, sub total:$%.2f\n",products[i],prices[i],qty[i],prices[i] * qty[i]);
   } 
        float salestax = *bill_amount * 0.07;
        printf("\nThe total bill amount is:  $%.2f",*bill_amount);
        printf("\nSales Tax: $%.2f",salestax);

        printf("\nTotal Payable: $%.2f",*bill_amount + salestax);
    }

