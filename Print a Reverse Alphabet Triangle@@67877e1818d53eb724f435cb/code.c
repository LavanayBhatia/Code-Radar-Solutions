#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=i;j<=x;j++){
            printf("%c",64+j);
        }
        printf("\n");
    }
}