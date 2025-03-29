#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int k=1;k<=x;k++){
           
            if(i>1 && i<=x-1 && k>=2 && k<=x-1){
            printf(" ");}
            else{
                 printf("*");
            }
        }
        printf("\n");
    }
}