// Your code here...
#include <stdio.h>

int getLowestSetBitPosition(int n) {
    return n ? __builtin_ctz(n) + 1 : 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Lowest set bit is at position: %d\n", getLowestSetBitPosition(num));

    return 0;
}
