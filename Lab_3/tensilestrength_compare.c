#include <stdio.h>

int main(void) {
    // getting tensile strength of material 1
    float tensile_stren_1, tensile_stren_2;
    printf("Tensile Strength of Material 1: ");
    scanf("%f", &tensile_stren_1);
    
    // getting tensile strength of material 2
    printf("Tensile Strength of Material 2: ");
    scanf("%f", &tensile_stren_2);
    
    // comparing tensile Strength
    if (tensile_stren_1 > tensile_stren_2)
        printf("Material 1 is more tensile than material 2.");
    else if (tensile_stren_1 < tensile_stren_2)
        printf("Material 2 is more tensile than material 1.");
    else
        printf("Both materials have same tensile strength.");
        
    // ending the program
    return 0;
}
