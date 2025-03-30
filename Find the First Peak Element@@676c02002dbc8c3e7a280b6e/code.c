#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int arr[x];

    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    int all_same = 1;
    for (int i = 1; i < x; i++) {
        if (arr[i] != arr[0]) {
            all_same = 0;
            break;
        }
    }

    if (all_same) {
        printf("-1");
        return 0;
    }

    if (x == 2) {
        arr[0] > arr[1] ? printf("%d", arr[0]) : printf("%d", arr[1]);
        return 0;
    }

    for (int i = 1; i < x - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d", arr[i]);
            return 0;
        }
    }

    printf("%d", arr[x - 1]);

    return 0;
}
