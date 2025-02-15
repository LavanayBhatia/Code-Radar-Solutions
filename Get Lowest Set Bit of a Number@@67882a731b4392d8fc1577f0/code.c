// Your code here...
#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int z=0;
    if (n==0){
        printf("-1\n");
        return 0;
    }
    while((n&1)==0){
        n>>=1;
        z++;
    }
    printf("%d",z);
    return 0;}