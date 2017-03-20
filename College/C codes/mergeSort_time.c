/* Merge Sort time to sort is O(nlogn).[Proof using time calculation]
 * @author : ABHINAV GUPTA
 */
#include<stdio.h>
#include<sys/time.h>

void merge(int *arr, int begin,int mid,int end,int *temp) {
    int i=begin,j=mid+1,k=0;
    for(k=i;k<end;k++){
        if(i>mid)
            temp[k]=arr[j++];
        else if(j>end)
            temp[k]=arr[i++];
        else if(arr[i]>arr[j])
                temp[k]=arr[i++];
        else
            temp[k]=arr[j++];
    }
    for(i = begin;i<end;i++)
        arr[i] = temp[i];
}

void mergesort(int *arr,int begin,int end,int *t) {
    if(begin < end) {
        int mid  = (begin + end) / 2;
        mergesort(arr,0,mid,t);
        mergesort(arr,mid+1,end,t);
        merge(arr,begin,mid,end,t);
    }
}
int main() {
    struct timeval start,end;
    double t1,t2,t3;
    int n1,n2,n3;
    scanf("%d",&n1);
    int j = n1;
    int i, arr[n1+1],temp[n1+1];
    for(i = 0; i < n1; i++)
        arr[i] = j--;
    gettimeofday(&start,NULL);
    mergesort(arr,0,n1,temp);
    gettimeofday(&end,NULL);
	t1=(end.tv_sec*1000000+end.tv_usec)-(start.tv_sec*1000000+start.tv_usec);
	/*
	scanf("%d",&n2);
    j = n2;
    for(i = 0; i < n2; i++)
        arr[i] = j--;
    gettimeofday(&start,NULL);
    mergesort(arr,0,n2,temp);
    gettimeofday(&end,NULL);
	t2=(end.tv_sec*1000000+end.tv_usec)-(start.tv_sec*1000000+start.tv_usec);
	
	scanf("%d",&n3);
    j = n3;
    for(i = 0; i < n3; i++)
        arr[i] = j--;
    gettimeofday(&start,NULL);
    mergesort(arr,0,n3,temp);
    gettimeofday(&end,NULL);
	t3=(end.tv_sec*1000000+end.tv_usec)-(start.tv_sec*1000000+start.tv_usec);
    */printf("\n---------\n");
    printf("Time For n = %d is %lf\n",n1,t1);  //Time For n = %d is %lf\nTime For n = %d is %lf\n",n1,t1,n2,t2,n3,t3);
    printf("\n---------\n");
    return 0;
}
