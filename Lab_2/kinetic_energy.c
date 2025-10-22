#include <stdio.h>

int main(void) {
    // taking mass as input
    float mass = 0.0;
    printf("Mass(kg): ");
    scanf("%f", &mass);
    
    // taking velocity as input
    float velocity = 0.0;
    printf("Velocity(m/s): ");
    scanf("%f", &velocity);
    
    // calculating kinetic energy
    float kinetic = 0.5 * mass * velocity * velocity;
    
    // printing the force
    printf("Kinetic Energy: %.2f Joules\n", kinetic);
    
    // ending the program
    return 0;
}
