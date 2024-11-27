#include <stdio.h>

int main() {
    int n, evenCount = 0, oddCount = 0;

    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        (n % 2 == 0) ? evenCount++ : oddCount++;
    }

    printf("So chan: %d, So le: %d\n", evenCount, oddCount);
    return 0;
}

