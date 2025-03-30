#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x-2;i++){
        if(arr[i]>arr[i+1]&&arr[i+1]>arr[i+2]){
            printf("%d",arr[i+1]);
            break;
        }
    }
}