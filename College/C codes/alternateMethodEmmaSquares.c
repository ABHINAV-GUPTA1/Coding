/*Emma Square problem*/
/*
Counting perfect squares between two numbers
author:ABHINAV GUPTA
made during 3rd semester in college
------------------------------------
Input 1:
2
3 9
17 24
Output 1:
2
0

--------------------
*/
#include <stdio.h>
#include<math.h>
int main() {
    int T;
    scanf("%d",&T);
    int i,j;
    for(i=0;i<T;i++) {
        int A,B;
        int count =0;
        scanf("%d %d",&A,&B);
        printf("%d\n",(int)(floor(sqrt(B))-ceil(sqrt(A)))+1);
    }
    return 0;
}
