// Array Reverse 
#include <stdio.h>

int main() {
    int array[]={1,2,3,4,5};
    int end=sizeof(array)/sizeof(array[0])-1;
    int s=end;
    int start=0;
    //swaping of elements...
    while(start<=end){
        int temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        start++;
        end--;
    }
    //display reversed array...
    for(start=0;start<=s;start++){
        printf("%d ",array[start]);
    }
    
    return 0;
}