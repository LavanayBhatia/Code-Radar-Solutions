// Your code here...
#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n >> 1); 
    }
    printf("%d", n & 1); 
}

int main() {
    int num;
    scanf("%d", &num);
    decimalToBinary(num);
    return 0;
}
