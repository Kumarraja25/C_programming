// Reverse the array
#include <stdio.h>
#include <stdlib.h>

void reverse(int a[],int start ,int end){
    while(start<end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}

int main(){
    int *ptr,end,start=0;
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    reverse(ptr,start,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
}

