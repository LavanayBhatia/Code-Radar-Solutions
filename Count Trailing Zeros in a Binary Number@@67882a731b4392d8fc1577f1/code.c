// Your code here...
#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int z=__builtin_ctz(x);
    printf("%d",z);}