/*Selection Sort

author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
#include<stdio.h>

int arr[]={10,5,28,17,9};
int (*selectionSort(int* a))[5] {
    int i,j;
    for( i=0; i < 4; i++) {
        int min = i;
        for(j = i; j < 5; j++) {
            if (a[min] >a[j]) {
                min = j;
            }
        }
        int temp = a[i];
        a[i]= a[min];
        a[min]= temp;
    }
    return (int(*)[5])arr;
}

int main() {
    int(*x)[5] = selectionSort(arr);
    int i;
    for(i = 0; i < 5; i++) {
        printf("%d ",*(*x+i));
    }
}
