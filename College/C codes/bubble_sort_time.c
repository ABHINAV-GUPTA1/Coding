#include <stdio.h>
#include <sys/time.h>

void bubbleSort(int A[], int n) {
	int i, j, temp;

	for(i = 0; i < n; i++)
		for(j = 0; j < n - i - 1; j++)
			if (A[j] > A[j+1]) {
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
}
int main() {
	struct timeval start, end;
	int arr1[8000], arr2[16000], i;
	long int us1, us2; 
	float ratio;

	for(i=7999; i>=0; --i)
		arr1[i]=i;

	for(i=15999; i>=0; --i)
		arr2[i]=i;

	gettimeofday(&start, NULL);
	bubbleSort(arr1, 8000);
	gettimeofday(&end, NULL);


	us1=(end.tv_sec*1000000+end.tv_usec) - (start.tv_sec*1000000+start.tv_usec);//microseconds time

	gettimeofday(&start, NULL);
	bubbleSort(arr2, 16000);
	gettimeofday(&end, NULL);

	us2=(end.tv_sec*1000000+end.tv_usec) - (start.tv_sec*1000000+start.tv_usec);


	ratio=(float)us2/us1;

	printf("\n\nARRAYS SORTED!\
		\n\nus1 = %ld (for 8000 elements), us2 = %ld (for 16000 elements)\
		\n\nus2/us1 = %f (~4, as Bubble Sort is O(n^2))", us1, us2, ratio);

	printf("\n\n");
	return 0;
}