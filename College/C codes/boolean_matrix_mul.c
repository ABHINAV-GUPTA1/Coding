/*Booolean matrix
 *Eg:  1 0 1 1       0 0 0 0
       1 1 1 1  -->  0 0 1 1
       0 0 1 1       0 0 0 0
       1 1 1 1       0 0 1 1
 * @author : ABHINAV GUPTA
 */
#include<stdio.h>

int main() {
    int i, n, j;
    scanf("%d",&n);	
    int arr[n][n];
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n-------------------\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }  
    int zrow = 0;
    int zcol = 0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++){
            if(arr[i][j] == 0) {
                zrow = zrow | (1 << i);
                zcol = zcol | (1 << j);
            } 
        }
    }
    for(i = 0; i < n; i++) {
        if((zrow & (1 << i)) != 0) {
            for(j = 0;j < n; j++)
                arr[i][j] = 0;
        }
    }
    for(i = 0; i < n; i++) {
        if((zcol & (1 << i)) != 0) {
            for(j = 0;j < n; j++)
                arr[j][i] = 0;
        }
    }
    printf("\n-----------------------------\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }        
    return 0;	
}
