#include <stdio.h>

int main() {
    int year, month, days;

    printf("Nhap nam va thang: ");
    scanf("%d %d", &year, &month);

    if (month == 2) {
        days = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month >= 1 && month <= 12) {
        days = 31;
    } else {
        printf("Thang khong hop le!\n");
        return 1;
    }

    printf("So ngay trong thang %d, nam %d: %d\n", month, year, days);
    return 0;
}

