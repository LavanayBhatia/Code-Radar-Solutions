// Your code here...
#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x=='a' || x=='e' ||x=='i'||x=='o'||x=='u'){
        printf("Vowel");
    }
    else if(x>='a' && x<='z'){
        printf("Consonant");
    }
    else if (x>='1' && x<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}