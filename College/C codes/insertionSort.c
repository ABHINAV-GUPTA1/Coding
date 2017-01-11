/*Insertion Sort
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
#include<stdio.h>
int arr[]={10,5,28,17,9};
int (*insertionSort(int* a))[5] {
    int i;
    for(i = 0; i < 4; i++) {
        int pivot =a[i+1];
        int j=i;
        while(a[j] > pivot && j>=0) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]= pivot;
    }
    return (int(*)[5])arr;
}
int main() {
    int(*x)[5] = insertionSort(arr);
    int i;
    for(i = 0; i < 5; i++) {
        printf("%d ",*(*x+i));
    }
}
