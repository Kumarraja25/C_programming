// largest and smallest element in an array 
#include <stdio.h>

int main() {
    int array[]={1,2,3,4,5};
    int end=sizeof(array)/sizeof(array[0])-1,i=0;
    int largest=array[0];
    int smallest=array[0];
    //comparison of elements...
    while(i<=end){
        if(array[i]>largest) 
          largest=array[i];
        if(array[i]<smallest) 
          smallest=array[i]; 
          i++;
    }
    printf("largest = %d\n",largest);
    printf("smallest = %d",smallest);
    
    return 0;
}