#include <stdio.h>

int main(void) {
    int x;

    printf("Please enter a number ");
    scanf("%i", &x);

    if (x%2 == 0) {
        printf("You entereed an even number");
    } else {
        printf("You entered an odd number");
    }
}