#include <stdio.h>

int main(void) {
    int points;

    const int number = 2;
    printf("How many points did you lose?");
    scanf("%i", &points);

    if (points < number) {
        printf("You lost less points than me. \n");
    } else if (points > number) {
        printf("You lost more points than me. \n");
    } else {
        printf("We lost the same points");
    }

    return 0;
}