#include<stdio.h>
int main(){
    int arr[10] = {95,180,34,11 9,11,123,62,64};
    int n = 8;
    int min = arr[0];
    int max = arr[0];
    int disk = 50;
    for(int i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }
    int sum = max - disk;
    int sum2 = max - min;
    printf("\n  Totol Head M = %d", sum + sum2);
}