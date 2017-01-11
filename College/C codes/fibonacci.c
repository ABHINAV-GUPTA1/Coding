/*fibnocii series
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
#include<stdio.h>
void fib(int n) {
    int old =0;
    int current=1;
    int i=0,new;
    printf("n%d=%d\n",i++,old);
    printf("n%d=%d\n",i,current);
    for(i = 2; i <= n; i++) {
        new = old +current;
        old = current;
        current = new;
        printf("n%d=%d\n",i,new);
    }
}

int main() {
    fib(15);
    return 0;
}
