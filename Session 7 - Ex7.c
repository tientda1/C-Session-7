#include <stdio.h>

int main() {
    int i, j , array[i];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &i);
    for (int j = 0; j < i; j++) {
        int num;
        printf("Nhap phan tu thu %d (hay nhap so le): ", j + 1);
        scanf("%d", &num);
        while (num % 2 == 0) {
            printf("Phan tu phai la so le. Vui long nhap lai: ");
            scanf("%d", &num);
        }
        array[j] = num;
    }
    printf("Cac phan tu cua mang la: ");
    for (int j = 0; j < i; j++) {
        printf("%d ", array[j]);
    }

    return 0;
}

