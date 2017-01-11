/*Sum of prime number in given range
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
#include<stdio.h>
int main(){
    int num,i,count,min,max,sum=0;
    printf("Enter min range: \n");
    scanf("%d",&min);
    printf("Enter max range: \n");
    scanf("%d",&max);
    for(num = min;num<=max;num++){
        count = 0;
        for(i = 2; i <= num/2; i++){
            if(num%i == 0){
                count++;
                break;
            }
        }
        if(count==0 && num!= 1)
            sum = sum + num;
    }
    printf("Sum of prime numbers is: %d\n",sum);
    return 0;
}