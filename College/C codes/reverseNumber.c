/*reverse number
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
#include<stdio.h>
int main() {
    int num;
    printf("Enter number: \n");
    scanf("%d",&num);
    int result=0;
    while(num > 0) {
        int z = num%10;
        result = result*10 +z;
        num= num/10;
    }
    printf("%d",result);
    return 0;
}