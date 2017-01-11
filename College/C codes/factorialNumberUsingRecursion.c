/*Factorial using recursion*/
/*
Author:ABHINAV GUPTA
made during 3rd semester in college
*/
#include<stdio.h>
long long int fact(int n) {
    if(n==1) {
        return 1;
    } else {
        return n*fact(n-1);
    }
}

int main() {
    int n =17;
    long long int result = fact(n);
    printf("%lld", result);
}
