// Your code here...
#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    while(x>0){
        printf("%d",x&1);
        x = x >> 1;
    }
    }