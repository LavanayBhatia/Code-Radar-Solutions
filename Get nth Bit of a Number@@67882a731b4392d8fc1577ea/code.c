// Your code here...
#include <stdio.h>
int main(){
    int x,z;
    scanf("%d %d",&x,&z);
    int y=(x>>z)&1;
    printf("%d",y);}