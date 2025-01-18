#include<stdio.h>
#include<stdlib.h>
int traverse(int *a, int n){
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void selectionsort(int*a, int n){
    int indexofmin,temp;
    for (int i = 0; i < n-1; i++)
    {
        indexofmin=i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<a[indexofmin]){
            indexofmin=j;
            }
        }
     
    temp =a[i];
    a[i]= a[indexofmin];
    a[indexofmin]= temp;   
    }
}
int main(){
    int a[]= {12,56,33,23,90,6,76,13};
    int n =8;
    traverse(a,n);
    printf("After sorting elements \n");
    selectionsort(a,n);
    traverse(a,n);
    return 0;
}
