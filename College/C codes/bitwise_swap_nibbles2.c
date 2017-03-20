#include<stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    int z = x >> 4;
    x = (x << 4)&240;
    printf("%d",x|z);
    return 0;
}
