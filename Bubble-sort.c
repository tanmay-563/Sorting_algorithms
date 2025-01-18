#include <stdio.h>
#include <stdlib.h>
void traverse(int*a, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void bubblesort(int *a, int n){
    int temp;
    for (int i = 0; i < n-1 ; i++)
    {
        for (int j = 0; j < n-i-1 ; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
            }
        }
        
    }
    
}
void bubblesortadaptive(int *a, int n){
    int temp;
    int flag = 0;
    for (int i = 0; i < n-1 ; i++)
    {
        int flag = 1;
        for (int j = 0; j < n-i-1 ; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
                int flag = 0;
            }
        }
        if(flag){
            return;
        }
        
    }
    
}
int main(){
    int a[]= {23,54,67,89,43,21,88,90};
    int n = 8;
    traverse(a,n);
    bubblesortadaptive(a,n);
    traverse(a,n);
    return 0;
}
