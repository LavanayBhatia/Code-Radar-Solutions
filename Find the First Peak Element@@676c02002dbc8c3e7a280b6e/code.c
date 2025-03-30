#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    if(x==2){ 
        arr[0]>arr[1]?printf("%d",arr[0]):printf("%d",arr[1]);
        return 0;
    }
    for(int i=0;i<x-2;i++){
        if(arr[i]<arr[i+1]&&arr[i+1]>arr[i+2]){
            printf("%d",arr[i+1]);
            break;
        }
        
    }
}