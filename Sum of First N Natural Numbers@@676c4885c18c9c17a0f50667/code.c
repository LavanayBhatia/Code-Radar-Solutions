// Your code here...
#include <stdio.h>
int main(){
    int x,y=0;
    scanf("%d",&x);
    int i;
    while(i<=x){
        y+=i;
        i++;
    }
    printf("%d",y);
}