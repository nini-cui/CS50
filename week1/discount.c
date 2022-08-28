#include <stdio.h>

float discount(float price, int percent);

int main(void) 
{
    float price;
    int percent;

    printf("Please enter the product price and discount: ");
    scanf("%f%i", &price, &percent);

    float sale = discount(price, percent);
    printf("Sale Price: %.2f\n", sale);
}

float discount(float price, int percent){
    return price * (1 - .01 * percent);
}

