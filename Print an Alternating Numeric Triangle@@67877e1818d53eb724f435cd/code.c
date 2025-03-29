#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            if(i%3==0||i==j){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}