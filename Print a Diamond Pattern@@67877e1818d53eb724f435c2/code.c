#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=i;j<x;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for(int l=2;l<=i;l++){
            printf("*");
        }
        printf("\n");

    }
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        // for(int k=;k;k--){
        //     printf("*");
        // }
        // for(int l=i;l<x;l++){
        //     printf("*");
        // }
        printf("\n");
    }
    
}