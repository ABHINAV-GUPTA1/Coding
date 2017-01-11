/*gcd using Euclidian method
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
#include <stdio.h>

int gcd_algorithm(int x, int y) {
    if (y == 0) {
        return x;
    } 
    return gcd_algorithm(y, (x % y));
}

int main() {
    int num1, num2, gcd;
    printf("Enter two numbers to find gcd using Euclidean algorithm: \n");
    scanf("%d%d", &num1, &num2);
    gcd = gcd_algorithm(num1, num2);
    if (gcd)
        printf("The GCD of %d and %d is %d\n", num1, num2, gcd);
    else
        printf("Invalid input!!!\n");
    return 0;
}