#include <stdio.h>

int main(void) {
    char chr;

    printf("Please enter your answer: ");
    scanf("%c", &chr);

    if (chr == 'y') {
        printf("Agreed");
    } else {
        printf("Not Agreed");
    }
}