// Given an array of N integers arr[] where each element represents the maximum length of the jump that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y ≤ x.
// Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.

// Note: Return -1 if you can't reach the end of the array.

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[] = {1, 4, 3, 2, 6, 7,5} ;
    int end=(sizeof(arr)/sizeof(arr[0]))-1;
    //printf("%d",end);
    int i=0,count=0;
    while(i<end){
        if(arr[i]==0){
            count=-1;
            break;
        }
        i+=arr[i];
        count++;
    }
    printf("%d",count);
}