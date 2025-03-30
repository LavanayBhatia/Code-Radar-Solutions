#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;i++){
        if(arr[i]>arr[i+1]){
printf("Not Sorted");
        }
        else{
            printf("Sorted");
        }
    }
}