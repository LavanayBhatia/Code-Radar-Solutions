// Your code here...
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (n > 1) {
        decimalToBinary(n >> 1); 
    }
    printf("%d", n & 1); 
    return 0;
}
