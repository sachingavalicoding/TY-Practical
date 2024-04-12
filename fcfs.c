#include<stdio.h>
int main(){
    int disk = 50;
    int n = 9;
    int arr[10] = {95,180,34,119,11,123,62,64};
    int tm[10];
    int sum = 0;
    for(int i = 0; i < n - 1 ; i++){
        
        tm[i] = disk - arr[i];
        if(tm[i] < 0){
         tm[i] = arr[i] - disk;
        }
        disk = arr[i];
        sum += tm[i];
    }
        printf("\n Total Head Movement =   %d",sum);
    
}