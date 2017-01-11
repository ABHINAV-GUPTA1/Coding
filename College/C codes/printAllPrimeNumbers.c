/*prime numbers
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
#include<stdio.h>
#include<math.h>
int isPrime(int n){
    int i;
    if (n==2)
        return 1;
    if (n%2==0 || n==1)
        return 0;
    for (i=3;i<=sqrt(n);i+=2)
        if (n%i==0)
            return 0;
    return 1;
}

void prime( int n) {
    int i,j;
    for(j = 1; j <= n; j++) {
        if (isPrime(j)) {
            printf("%d is prime\n", j);
        }
    }
}

int main() {
    int n =1000;
    prime(n);
    return 0;
}
