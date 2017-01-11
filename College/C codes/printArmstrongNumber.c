/*
Print all Armstrong Number till 100000.

*/
#include<stdio.h>
/*
author:ABHINAV GUPTA
made during 3rd semester in college 
*/
int power(int x, int y) {
    int r=1;
    while(y>0) {
        r=r*x;
        y--;
    }
    return r;
}

int main() {
    int num=10;
    while(num<100000) {
        int countDigits=0;
        int x = num;
        int n = num;
        int result =0;
        while(x>0) {
            countDigits++;
            x=x/10;
        }
        while(n>0) {
            int z = n%10;
            result = result + power(z,countDigits);
            n= n/10;
        }
        if(result==num) {
            printf("%d number is armstrong \n",num);
        }
        num++;
    }
}