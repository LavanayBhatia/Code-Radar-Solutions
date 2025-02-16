// Your code here...
#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for (int i=2;i<=x/2;i++){
        if (x%i==0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
}