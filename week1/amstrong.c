#include <stdio.h>

int main() 
{
    int num, remainder, result, originalNum = 0;
    // int num, originalNum, remainder, result = 0;
    // int num = 0;
    // int remainder = 0;
    // int result = 0;
    // int originalNum = 0;
    
    printf("Please input a 3 digits number: ");
    scanf("%d", &num);
    originalNum = num;
    
    while (originalNum != 0) {
        remainder = originalNum % 10;
        printf("remainder is %d \n", remainder);
        result += remainder * remainder * remainder;
        printf("result is %d \n", result);
        originalNum /= 10;
        printf("num is %d \n", originalNum);
    }

    return 0;
}

