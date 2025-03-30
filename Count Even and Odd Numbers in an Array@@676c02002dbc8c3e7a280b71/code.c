#include <stdio.h>
int main(){
    int x,a=0,b=0;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        if(arr[i]%2==0){
a++;
        }
        else{
            b++;
        }
    }
    printf("%d %d",a,b);
}