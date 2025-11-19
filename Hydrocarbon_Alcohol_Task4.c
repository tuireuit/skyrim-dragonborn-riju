#include <stdio.h>

int main() {
     int n;
     printf("Enter the value of n = ");
     scanf("%d",&n);
     printf("C%dH%dOH",n,2*n+1);   //completed without using subscript
    return 0;
}

/*In chemistry, alcohol is an organic compound that carries at least
one hydroxyl functional group (-OH) bound to a saturated carbon
atom. An important class of alcohols, of which methanol and
ethanol are the simplest members, includes all compounds for
which the general formula is
C n H 2n+1 OH.

Write a C program that would take the value of n as input and
print the corresponding simple alcohol formula.*/

