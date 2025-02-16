// Your code here...
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x <= 1) {
        printf("Not Prime");
        return 0;
    }
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            printf("Not Prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}
