#include <stdio.h>
int main(){
    int x,k=0;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1+k;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}