#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=i;j<x;j++){
            printf("*");
        }
        for(int k=1;k<=x;k++){
            printf("*");
        }
        for(int l=2;l<=x;l++){
            printf("*");
        }
        printf("\n");

    }
    
}