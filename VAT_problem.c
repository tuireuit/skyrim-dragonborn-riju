#include<stdio.h>

int main()
{
     
    float amount,VAT_added_amount;
    printf("Enter an amount=$");
    scanf("%f",&amount);
    VAT_added_amount=(amount+(amount*0.05));
    printf("With VAT added:$ %.2f",VAT_added_amount);
    return 0;


     /*Value Added Tax:
Bvaly is a multinational business venture that focuses on e-commerce.
     To cover the maintenance cost, they charge 5% VAT for any item purchased.
     For example: If you buy a product worth $100.00, you have to pay $105.00 (including VAT).
     They have hired you to automate the process of  calculating the amount a customer needs to pay. 
     Write a C program that asks the user to enter the dollar-and-cents amount, then displays the amount with 5% VAT added. 

Sample run:
Enter an amount: 100.00
With VAT added: 105.00*/



}
