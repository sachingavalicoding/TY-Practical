#include<stdio.h>
int main()
{
    int arr[10]={95,180,34,119,11,123,62,64};
    int disk=50;
    int n=8;
    int min=0;
    int max=199;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0 ; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j]   = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] < disk && arr[i] > min){
          min = arr[i];
        }
    }
    
    int sum  =  disk + ( max - min);
    int sum2  =  (max - disk) +  min ;
    printf("\n Sum = %d",sum2);
}