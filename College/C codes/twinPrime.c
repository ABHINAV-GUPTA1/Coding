/*Twin Prime check
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
===========================================================================
A twin prime is a prime number that is either 2 less or 2 more than another prime number —for example, the twin prime pair (41, 43). In other words, a twin prime is a prime that has a prime gap of two. Sometimes the term twin prime is used for a pair of twin primes; an alternative name for this is prime twin or prime pair.(eg 3,5)
===========================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int i,n1,n2;
    int d;
    int c1=0,c2=0;
    printf("Enter a Number 1\n");
    scanf("%d",&n1);
    printf("Enter Number 2\n");
    scanf("%d",&n2);
    for(i = 1; i <= n1; i++) {
        if(n1%i == 0)
            c1++;
    }
    for(i = 1; i <= n2; i++) {
        if(n2%i == 0)
            c2++;
    }
    d=abs(n1-n2);
    if(d==2 && c1==2 && c2==2)
        printf("The Two Numbers are Twin Prime\n");
    else
        printf("The two Numbers are Not Twin Prime\n");
}