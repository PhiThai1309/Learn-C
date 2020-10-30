#include<stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("input fahrenheit: \n");
    scanf("%f" , &fahr);
    while(fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("convert to celsius %6.1f \n", celsius);
        break;
    }
    return(0);
}
