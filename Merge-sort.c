#include<stdio.h>
int traverse(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void merge(int a[], int low, int mid, int high){
    int i=low, j=mid+1, k=low; int b[high +1];
    while(i<=mid && j<=high){
    if(a[i]<a[j]){
        b[k]=a[i];
        i++;k++;
        }
    else{
        b[k]= a[j];
        j++;k++;
        }
    }
    while(i<=mid){
        b[k]=a[i];
        i++; k++;
    }
    while(j<=high){
        b[k]=a[j];
        j++;k++;
    }
    for(int i=low; i<=high;i++){
        a[i]=b[i];
    }

}
void mergesort(int a[] , int low, int high){
    if(low<high){
        int mid=(low+high)/2;
           mergesort(a,low,mid);
           mergesort(a, mid+1, high);
           merge(a, low ,mid,high);
        }
}
int main(){
    int a[]= {23,34,54,21,2,87,98,65};
    int n = 8;
    traverse(a,n);
    printf("After sorting elements... \n");
    mergesort(a,0,n-1);
    traverse(a,n);
    return 0;
}
