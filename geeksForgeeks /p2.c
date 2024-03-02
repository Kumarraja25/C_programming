// Find the maximum and minimum element in an array..

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n,largest,smallest;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",ptr[i]);
        if(i=0){
           largest=ptr[i];
           smallest=ptr[i];
        }
        else{
           if(ptr[i]>largest) 
             largest=ptr[i];
           if(ptr[i]<smallest) 
             smallest=ptr[i];
        }
         
    }
    printf("%d ",largest);
    printf("%d ",smallest);
}

