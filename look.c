#include<stdio.h>
int main()
{
    int arr[10]={95,180,34,119,11,123,62,64};
    int disk=50;
    int n=8;
    int min=0;
    int max=0;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0 ; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j]   = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    min = arr[0];
    max= arr[n-1];
    
    int sum  =  (disk - min) + ( max - min);
 
    printf("\n Sum = %d",sum);
}