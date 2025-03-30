#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x-1;i++){
        if(arr[i]>arr[j+1]&&arr[j+1]>arr[j+2]){
            printf("%d",arr[j+1]);
            break;
        }
    }
}