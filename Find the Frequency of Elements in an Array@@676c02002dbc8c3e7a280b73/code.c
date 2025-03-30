#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x],arr1[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < x; i++)
    {
        int k=1;
        if(arr1[i]==1){
            continue;
        }
        for(int j=i+1;j<x;j++){
            if(arr[i]==arr[j]){
                k++;
                arr1[j]=1;
            }
        }
        printf("%d %d",arr[i],k);
        printf("\n");
    }}