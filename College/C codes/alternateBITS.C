#include <stdio.h>
/*
author : ABHINAV GUPTA
made during 3rd semester in college
Alternate bits
*/
int main() {
    int num,count=0;
    scanf("%d",&num);
    int x= num;
    while(x) {
        count++;
        x = x >>1;
    }
    int y = (num^0xAAAAAAAA)& (~((~0)<<count));
    int z= (num^0x55555555) & (~((~0)<<count));
    if((y==0) || (z==0)) {
        printf("true");
    } else
        printf("false");
	return 0;
}