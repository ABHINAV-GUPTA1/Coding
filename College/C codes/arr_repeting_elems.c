/*  
Given an array, print the number of elements appearing more than once in it.
I/P->
	8
	1 2 3 5 2 2 2 1
O/P->
	Repeating elements are : 
    1  = 2 times
    2  = 4 times
    -------------------------------
    Number of repeating elements : 2
    --------------- 
Expalnation:-
 (as 1 and 2 repeat)
*/

#include <stdio.h>
#include <stdlib.h>

int CountRepElems(int size, int *A) {
    int i, count = 0, *table, max = A[0];

    for(i = 0; i < size; i++)
        if(A[i] > max)
            max = A[i];
    
    table = calloc(max + 1, sizeof(int)); // void *calloc(size_t nitems, size_t size)
    for(i = 0; i < size; i++)
        table[A[i]]++;
    printf("Repeating elements are : \n");
    for(i = 0; i < max + 1; i++)
        if(table[i] > 1) {
            printf("%d  = %d times\n", i, table[i]);
            count++;
        }
    return count;
}

int main() {
    int N, i;
    scanf("%d", &N);
    int A[N];
    for(i = 0; i < N; i++)
        scanf("%d", &A[i]);
	
    printf("-------------------------------\nNumber of repeating elements : %d\n---------------\n", CountRepElems(N, A));
}
