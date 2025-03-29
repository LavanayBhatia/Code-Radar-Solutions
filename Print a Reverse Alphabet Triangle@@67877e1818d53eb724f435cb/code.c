#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=x;i;i--){
        for(int j=1;j<=i;j++){
            printf("%c ",64+j);
        }
        printf("\n");
    }
}