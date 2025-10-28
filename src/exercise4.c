#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float arr[10];
    float x = atof(argv[11]);
    int k = atoi(argv[12]);
    for (int i = 0; i < 10; i++) {
    arr[i] = atoi(argv[i + 1]);
        }
    for (int i = k; i < 10; i++) {
        printf("%.2f ", arr[i - k]);
        }
    printf("%.2f ", x);
    for (int i = k; i < 9; i++) {
        printf("%.2f ", arr[i]);
    }
}
