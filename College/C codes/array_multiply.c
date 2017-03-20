/*Array Multiplication
 * @author:ABHINAV GUPTA 
 */
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);	
    int result[n];
    int arr[n], i;
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    result[n-1] = 1;
    for(i = n - 2; i >= 0; i--){
        result[i] = result[i+1] * arr[i+1];
    }
 
    int left = 1;
    for(i = 0; i < n; i++){
        result[i] = result[i] * left;
        left = left * arr[i];
    }
    for(i = 0; i < n; i++)
        printf("%d ",result[i]); 	 
    return 0;
}
