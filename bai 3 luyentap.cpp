#include <stdio.h>
#include <string.h>
int main() {
    char password[] = "phong30102006", input[20];
    
    printf("Nhap mat khau: ");
    scanf("%s", input);

    printf(strcmp(password, input) == 0 ? "Mat khau dung!\n" : "Mat khau sai!\n");

    return 0;
}

