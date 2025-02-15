// Your code here...
#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int z=x^(1<<y);
    printf("%d",z);}