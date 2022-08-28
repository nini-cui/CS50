// #include <cs50.h>
#include <stdio.h>

int main(void) 
{
    float x;
    float y;

    printf("Please enter two int numbers: ");
    scanf("%f%f", &x, &y);
    float z = x / y;
    printf("%.50f\n", z);
}