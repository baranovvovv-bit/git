#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
    float arr2[10];

    for(int i = 0; i < 10; i++)
    {
        scanf("%f",&arr2[i]);
    }

    for (int i = 9; i >= 0 ; i--)
    {
        printf("%.3f ",arr2[i]);
    }
}
