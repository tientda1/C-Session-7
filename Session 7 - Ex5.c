#include <stdio.h>

int main() {
    int i, array[5] = {12, 5, 7, 19, 3};
    int max = array[0];
    int min = array[0];
    for (i = 0; i < 5; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);

    return 0;
}

