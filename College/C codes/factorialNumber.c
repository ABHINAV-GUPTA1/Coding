/* Factorial of a number*/
/*
Author:ABHINAV GUPTA
made during 3rd semester in college
*/
#include<stdio.h>
long long int fact(int n) {
    long long int r=1;
    while(n > 0) {
		r = r*n;
		n--;
    }
    return r;
}

int main() {
    int n =10;
    long long int result = fact(n);
    printf("%lld", result);
}