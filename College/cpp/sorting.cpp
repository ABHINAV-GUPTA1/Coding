/*Design a Class name “Sorting” with following list of functions in
its public scope (insertion_sort() , selection_sort() , bubble_sort()
and quicksort() ).
After creating the class,  write a menu driven program to perform all
the sorting techniques on integer array of data.
ABHINAV GUPTA
2014-2018
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(){
    cout<<"\n----------Sorting------\n1.Enter size and then
        numbers\n2.Insertion Sort\n3.Selection Sort\n4.Bubble sort\n5.Quick
        Sort\n6.Exit\nEnter Choice\n---------------------\n";
}
class sorting{
    private:
    int array1[10000];
    int n;
    public:
    void input_array(){
        int size1;
        cout<<"\nEnter size\n";
        cin>>size1;
        n=size1;
        for(int i=0;i<n;i++)
            cin>>array1[i];
    }
    void display_array(string res){
        cout<<res <<"\n";
        for(int i=0;i<n;i++)
            cout<<array1[i]<<"\t";
        cout<<endl;
    }
    void insertion(){
        int temp,j;
        for(int i=0;i<n;i++)
        {
            temp=array1[i];
            j=i-1;
            while((temp<array1[j]) && (j>=0))
            {
                array1[j+1]=array1[j];
                j--;
            }
            array1[j+1] = temp;
        }
    }
    int select(int arr[],int k,int n){
        int pos=k,small=arr[k];
        for(int i=k+1;i<n;i++){
            if(arr[i]<small){
                small=arr[i];
                pos=i;
            }
        }
        return pos;
    }
    void selection(){
        int pos,k,temp;
        for(k=0;k<n;k++){
            pos=select(array1,k,n);
            temp=array1[k];
            array1[k]=array1[pos];
            array1[pos]=temp;
        }
    }
    void bubble(){
        int t;
        for(int i=0;i<n;i++)
            for(int j=0;j<n-i-1;j++)
            if(array1[j]>array1[j+1]){
            t=array1[j];
            array1[j]=array1[j+1];
            array1[j+1]=t;
        }
    }
    int partition1(int arr[],int beg,int end1){
        int loc=beg,temp,left=beg,right=end1,i,flag=0;
        while(flag!=1){
            while((arr[loc]<=arr[right]) && (loc!=right))
                right--;
            if(right==loc)
                flag=1;
            else if(arr[loc]>arr[right]){
                temp=arr[loc];
                arr[loc]=arr[right];
                arr[right]=temp;
                loc=right;
            }
            if(flag!=1){
                while((arr[loc]>=arr[left]) && (loc!=left))
                    left++;
                if(loc==left)
                    flag=1;
                else if(arr[loc]<arr[left]){
                    temp=arr[loc];
                    arr[loc]=arr[left];
                    arr[left]=temp;
                    loc=left;
                }
            }
        }
        return loc;
    }
    void quick(int beg,int end1){
        int loc;
        if(beg<end1){
            loc=partition1(array1,beg,end1);
            quick(beg,loc-1);
            quick(loc+1,end1);
        }
    }
    int get_size(){
        return n;
    }
};
int main()
{
    sorting s1;
    int a;
    while(1){
        display();
        cin>>a;
        switch(a){
            case 1:
            s1.input_array();
            s1.display_array("Entered array is ");
            break;
            case 2:
            s1.display_array("Entered array is ");
            s1.insertion();
            s1.display_array("Insertion sorted array is ");
            break;
            case 3:
            s1.selection();
            s1.display_array("Selection sorted array is ");
            break;
            case 4:
            s1.bubble();
            s1.display_array("Buble sorted array is ");
            break;
            case 5:
            s1.quick(0,s1.get_size()-1);
            s1.display_array("Quick sorted array is ");
            break;
            default:
            cout<<"\nThanks for using the program by ABHINAV GUPTA\n--------1410991019\n";
            return 0;
            break;
        }

    }

    return 0;
}