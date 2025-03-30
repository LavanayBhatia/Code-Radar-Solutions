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
    for(int i=0;i<n;i++){
if(arr[i]==arr1[0]){
    break;
}
else{
    arr1[i]=arr[i];
}
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}