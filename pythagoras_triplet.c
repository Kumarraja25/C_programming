// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}; 
    int count=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    //printf("%d",size);
    int sum=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            sum=arr[i]*arr[i]+arr[j]*arr[j];
            for(int k=j+1;k<size;k++){
                      if(sum==arr[k]*arr[k]){
                         count++;
                         printf("%d,",arr[i]);
                         printf("%d,",arr[j]);
                         printf("%d\n",arr[k]);
                      }  
            }
            
        }
    }
    //printf("%d",count);
    return 0;
}