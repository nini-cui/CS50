#include <stdio.h>

// main () function is the entry point
int main()
{
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        printf("reminder is %d \n", remainder);

        result += remainder * remainder * remainder;
        printf("result is %d \n", result);
        
       // removing last digit from the orignal number
        originalNum /= 10;
        printf("originalNum is %d \n", originalNum);
    }

    return 0;
}