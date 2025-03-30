#include <stdio.h>
int main(){
    int x,j=0;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;i++){
        if(arr[i]>arr[i+1]){
j=0;
break;
        }
        else{
            j=1;
        }
    }
    if(j){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}