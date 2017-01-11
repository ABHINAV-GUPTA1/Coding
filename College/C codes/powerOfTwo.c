/*Power of 2
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
#include<stdio.h>
int main() {
    int num;
    printf("enter number:\n");
    scanf("%d",&num);
    if((num & (num-1)) == 0) {
        printf("number is power of 2");
    } else
        printf("number is not power of 2");
    return 0;
}