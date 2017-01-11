/*nth bits
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
#include<stdio.h>
int main() {
    int x,n;
    printf("Enter number: \n");
    scanf("%d",&x);
    printf("Enter the bit you want to check: \n");
    scanf("%d",&n);
    int y = x>>n-1;
    printf("bit is = %d\n",y&1);
    return 0;
}