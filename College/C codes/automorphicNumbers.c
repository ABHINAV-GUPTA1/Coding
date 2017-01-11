/*Automorphic Numbers
In mathematics an automorphic number (sometimes referred to as a circular number) is a number whose square "ends" in the same digits as the number itself. For example, 52 = 25, 62 = 36, 762 = 5776, and 8906252 = 793212890625, so 5, 6, 76 and 890625 are all automorphic numbers. The only automorphic Kaprekar number is 1, because the square of a Kaprekar number cannot start with zero.
------------------------------
author:ABHINAV GUPTA          | 
made during 3rd semester      |
2014-2018                     |  
------------------------------ 
*/
#include<stdio.h>
int main() {
    int square,i,number;
    printf("AUTOMORPHIC NUMBERS BETWEEN 0 TO 99 ARE : ");
    for(i = 2; i < 10; i++) {
        square=i*i;
        number=square%10;
        if(i==number)
            printf("\nNUMBER = %d SQUARE = %d",number,square);
    }
    for(i = 10; i < 100; i++) {
        square=i*i;
        number=square%100;
        if(i==number)
            printf("\nNUMBER = %d SQUARE = %d",number,square);
    }
    return 0;
}