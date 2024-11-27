#include <stdio.h>

int main() {
    int n, oddSum = 0;

    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &n);
        if (n % 2 != 0) oddSum += n;
    }

    printf("Tong cac so le la: %d\n", oddSum);
    return 0;
}

