#include <stdio.h>
int main(){
    int x,k=0;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1+k;j<=i+1;j++){
            printf("%d ",j);
            k++;
        }
        printf("\n");
    }
}