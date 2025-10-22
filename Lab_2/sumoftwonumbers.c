#include <stdio.h>

int main(void) {
    // taking number as input
    float x, y;
    printf("x: ");
    scanf("%f", &x);
        
    // taking y as input
    printf("y: ");
    scanf("%f", &y);
    
    // calculating the sum
    float sum = x + y;
    
    // printing the sum
    printf("Sum: %.2f\n", sum);
    
    // ending the program
    return 0;
}
