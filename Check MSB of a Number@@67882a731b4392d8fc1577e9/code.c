// Your code here...
#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int y=x>>31&1;
    if (y==1){ 
        printf("Set");
    }
    else{
        printf("Not Set");
    }}
    