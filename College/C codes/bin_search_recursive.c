/* Binary search recursive way
 *
 * @author: ABHINAV GUPTA
 */
#include<stdio.h>
int binSearch(int arr[],int first,int last,int element) {
    if(first <= last){
        int mid=(first + last) / 2;
        if(arr[mid] == element)
            return mid;
        if(arr[mid] > element)
            return binSearch(arr,0,mid-1,element);
        return binSearch(arr,mid+1,last,element);
    }
    return -1;
}
int main() {
    int n;
    scanf("%d",&n);
    int i, arr[n];
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("\nEnter element to be searched=");
    int loc;
    scanf("%d",&loc);
    loc = binSearch(arr,0,n-1,loc);
    if(loc != -1)
        printf("\n--------------------\nElement is present at location = %d\n",loc);
    else
        printf("\n-----------\nElement not found\n");
    return 0;
}