#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=i;j<=i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}