#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    float arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%f",&arr[i]);
    }
    float x = atof(argv[1]);
    int k = atoi(argv[2]);
    for (int i = 0; i < k; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("%.2f ", x);
    for (int i = k; i < 10; i++) {
        printf("%.2f ", arr[i]);
    }
}
