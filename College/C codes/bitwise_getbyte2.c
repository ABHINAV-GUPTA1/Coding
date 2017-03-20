#include<stdio.h>
/*
 * @author : ABHINAV GUPTA	
*/
void get_byte(int x, int n) {
   int k = (((-1<<8)^(-1))&(x>>(8*n)));
   printf("%x",k); 
    
}
int main() {
    int x, n;
    scanf("%x%d",&x,&n);
    get_byte(x,n);
    printf("\n%x\n",x);
    return 0;
} 
