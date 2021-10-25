#include<stdio.h>
int partion(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    do{
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }while(i<j);
     int temp=arr[low];
     arr[low]=arr[j];
     arr[j]=temp;
     return j;
}
void quicksort(int sort[],int low,int high){
    int partionPoint;
    if(low<high){
        partionPoint = partion(sort,low,high);
        quicksort(sort,low,partionPoint-1);
        quicksort(sort,partionPoint+1,high);
    }
}
int main(){
    int n;
    printf("Enter Array length:-\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array elements:-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    printf("Your Sorted Array is:-\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
