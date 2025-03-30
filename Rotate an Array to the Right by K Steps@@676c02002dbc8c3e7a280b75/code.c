#include <stdio.h>

int v(int arr[],int n;int k){
    while(n<k){
int temp=arr[n];
arr[n]=arr[k];
arr[k]=temp;
n++;
k--;
}}
int f(int arr[],int n;int k){
    v(arr,0,n-1);
    v(arr,0,k-1);
    v(arr,k,n-1);
}
int main(){
    int n;
    scanf("%d",&x);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    f(arr,n,k);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}