#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<x;i++){
        for(int j=i;j<x;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}