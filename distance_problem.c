
#include<math.h>
#include<stdio.h>
int main()
{
   double x1,x2,y1,y2;


  printf("Enter x1 and y1:");
        scanf("%lf %lf",&x1,&y1);
        printf("Enter x2 and y2");
        scanf("%lf %lf",&x2,&y2);
double manhattan=fabs(x2-x1)+fabs(y2-y1);
double euclidean=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
printf("Manhattan distance: %lf",manhattan);
printf("Euclidean distance: %lf",euclidean);
return 0;

}
  

/*Two common distance metrics that are widely used when calculating distance between two points are the Manhattan distance, otherwise known as the L1 distance, and Euclidean distance, otherwise known as the L2 distance. Mathematically, these are given as follows:

You are given two points, (x1,y1) and (x2,y2), in the XY plane. Show the Manhattan distance and Euclidean distance between the given points.

Sample run:
Enter x1 and y1: -1 3
Enter x2 and y2: 3 2
Manhattan distance: 5.000000
Euclidean distance: 4.123106
*/

