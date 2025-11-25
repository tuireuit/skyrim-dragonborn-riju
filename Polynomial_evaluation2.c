#include<stdio.h>

int main()
{
  
    float x;
    printf("Enter the value of x= ");
    scanf("%f",&x);
    float y=((((3*x-2)*x+5)*x+1)*x-7)*x+6;
    printf("Value of the polynomial for x= %.2f",y);
    return 0;


/*Modify the program of the last polynomial evaluation task so that the polynomial is evaluated using the following formula:
((((3x-2)x+5)x+1)x-7)x+6
*/


}
