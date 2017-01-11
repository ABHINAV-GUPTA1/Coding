/*Bubble Sort
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
#include<stdio.h>
int arr[]={10,5,28,17,9};
int (*bubbleSort(int* a))[5] {
    int i,j;
    for(i=0; i<4; i++)
        for(j=0; j<4-i; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
    }
    return (int(*)[5])arr;
}

int main() {
    int(*x)[5] = bubbleSort(arr);
    int i;
    for(i = 0; i < 5; i++) {
        printf("%d ",*(*x+i));
    }
    return 0;
}