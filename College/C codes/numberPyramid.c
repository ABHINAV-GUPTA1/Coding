/*number pyramid
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
#include<stdio.h>
int main()
{
    int i, j, k,l;
    int n;
    printf("Enter height of pyramid: \n");
    scanf("%d",&n);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(k = 1; k <= i; k++) {
            printf("%d",k);
        }
        for(l = k-2; l > 0; l--) {
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}
