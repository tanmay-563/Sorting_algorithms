#include<stdio.h>
#include<stdlib.h>
void traverse(int *a , int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
}
int maximum(int *a, int n){
    int max=a[0];
    for(int i=0; i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
void countsort(int *a, int n){
    int i,j;
    int max = maximum(a,n);
    int *count=(int*)malloc((max+1)*sizeof(int));
    for ( i = 0; i < max+1; i++)
    {
        count[i]=0;
    }
    for ( i = 0; i < n; i++)
    {
        count[a[i]]=count[a[i]]+1;
    }
    i=0; j=0;
    while(i<=max){
        if(count[i]>0){
        a[j]=i;
        count[i]=count[i]-1;
        j++;
        }
        else{
            i++;
        }
    }
}
int main(){ 
    int a[]= {23,45,67,54,32,99,87,91};
    int n=8;
    traverse(a,n);
    printf("After sorting.... \n");
    countsort(a,n);
    traverse(a,n);
    return 0;
}
