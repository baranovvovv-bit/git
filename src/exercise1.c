#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    float arr[10];
    float sum = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%f", &arr[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    
    float ans = sum / 10;
    printf("%.3f\n", ans);
    
    return 0;
}
