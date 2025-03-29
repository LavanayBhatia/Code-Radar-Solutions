#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=2;i<=x;i++){
        for(int j=i-1;j<i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}