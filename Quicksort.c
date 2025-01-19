#include<stdio.h>
#include<stdlib.h>
int traverse(int *a, int n){
    for (int i = 0; i < n-1 ; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");  
}
int partition(int a[], int low , int high){
    int pivot = a[low];
    int i = low+1;
    int j = high;
    int temp;
    do{
    while(a[i]<= pivot){
        i++;
    }
    while(a[j]>pivot){
        j--;
    }
    if(i<j){
        temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        }
    }while(i<j);
    // now swapping j with low
    temp = a[low];
    a[low]= a[j];
    a[j]=temp;
    return j;
}
void quicksort(int a[], int low, int high){
    int partitionindex ; //index of pivot
    if(low<high){
    partitionindex = partition(a,low,high);
    quicksort(a,low,partitionindex-1);//sorting left subarray
    quicksort(a,partitionindex+1, high);//sorting right subarray
    }
}
int main(){
    int a[]= {23,45,54,32,11,77,4,30};
    int n = 8;
    traverse(a,n);
    printf("Elements after sorting..... \n");
    quicksort(a, 0 ,n-1);
    traverse(a,n);
    return 0;
}
