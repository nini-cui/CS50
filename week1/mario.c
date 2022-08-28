#include <stdio.h>

int main(void) 
{   
    int num;
    
    do {
        printf("How many question markd would you like to print: ");
        scanf("%i", &num);
    } while (num < 1);
    
    for (int i = 0; i < num; i++){
        printf("#");
        for (int j = 0; j < num - 1; j++){
            printf("#");
        }
        printf("\n");
    }
}