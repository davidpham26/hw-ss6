#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("x = %.2f\n", x1);
    } else {
        printf("Vo nghiem thuc\n");
    }

    return 0;
}

