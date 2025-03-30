#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        arr1[i]=arr[n-k+i];
    }
    // for(int i=0;i<=k;i++){
    //     arr1[k]=arr[i];
    // }
    for(int i=0;i<n;i++){
        printf("%d",arr1[i]);
        printf("\n");
    }
    }
