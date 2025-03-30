#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x],temp;
    for(int i=0;i<x;i++){
        for(int j=0;j<x-1;j++){
            if(arr[j]>arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
            }
        }
    }
    printf("%d %d",arr[0],arr[x-1]);
}