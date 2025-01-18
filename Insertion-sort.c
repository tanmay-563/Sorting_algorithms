#include<stdio.h>
#include<stdlib.h>
void traverse(int *a , int n){
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
}
void insertionsort(int *a,int n){
    for (int i = 1; i < n-1 ; i++)
    {
        int key;
        key = a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]= key;
    }
    
}
int main(){
    int a[]= {23,45,67,54,32,99,87,91};
    int n=8;
    traverse(a,n);
    printf("After sorting");
    insertionsort(a,n);
    traverse(a,n);
    return 0;
}
