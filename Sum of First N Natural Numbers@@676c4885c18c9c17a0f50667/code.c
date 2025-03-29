#include <stdio.h>
int main(){
    int x,k=0;
    scanf("%d",&x);
while(x!=0){
    k+=x;
    x-=1;
}
printf("%d",k);
}