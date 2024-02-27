// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[]={3,10,8,5,4,6,13,12}; 
    int count=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    //printf("%d",size);
    int sum=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=0;k<size;k++){
                      if(arr[i]*arr[i]+arr[j]*arr[j]==arr[k]*arr[k]){
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