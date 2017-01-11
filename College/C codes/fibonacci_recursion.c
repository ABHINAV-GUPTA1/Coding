/* fibnocii using recursion
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
#include<stdio.h>
int fib(int n) {
    if(n==0) {
        return 0;
    } else if(n==1) {
        return 1;
    }
    int result = fib(n-1) + fib(n-2);
    return result;
}
int main() {
    int r = fib(11);
    printf("%d", r);
}
