#include<stdio.h>

int main()
{
  
    float x;
    printf("Enter the value of x= ");
    scanf("%f",&x);
    float y=(3*x*x*x*x*x)-(2*x*x*x*x)+(5*x*x*x)+(x*x)-(7*x)+6;
    printf("Value of the polynomial for x= %.2f",y);
    return 0;

/*(Write a C program that asks the user to enter the value of x and outputs the value of the following polynomial:
3x5-2x4+5x3+x2-7x+6
Sample run:
Enter value of x: 2
Value of the polynomial for x=2: 100.00)*/




}
