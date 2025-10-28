#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
    float arr[10];

    for(int i = 0; i < 10; i++)
    {
        scanf("%f",&arr[i]);
    }

    int k = atoi(argv[1]);
    
    if(k > 0)
    {
        for (int i = 0; i < 10 ; i++)
        {
            printf("%.3f " , arr[(i - k + 10) % 10]);
        }
    } else 
    {
        for(int i = 0; i < 10; i++)
        {
            printf("%.3f ", arr[(i - k) % 10]);
        }
    }


}
