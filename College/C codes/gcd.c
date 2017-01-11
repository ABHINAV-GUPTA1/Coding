/*gcd of two numbers
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
#include<stdio.h>
int gcd(int x, int y) {
    int common =2;
    int result =1;
    while(common<=x && common<=y) {
        if(x%common==0 && y%common==0) {
            x=x/common;
            y=y/common;
            result =result*common;
        } else {
            common++;
        }
    }
    return result;
}

int main() {
    int x =6;
    int y=45;
    int result = gcd(x,y);
    printf("gcd = %d", result);
    return 0;
}