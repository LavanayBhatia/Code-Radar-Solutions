// Your code here...
#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d %d",(x^y)^x,(x^y)^y);}