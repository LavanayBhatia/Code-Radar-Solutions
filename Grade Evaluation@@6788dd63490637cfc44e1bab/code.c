// Your code here...
#include <stdio.h>
int main(){
    char x;
    scanf("%d",&x);
    if (x=='A'){
        printf("Excellent");
    }
    else if(x=='B'){
        printf("Good");
    }
    else if(x=='C'){
        printf("Average");
    }
    else if(x=='D'){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }
}