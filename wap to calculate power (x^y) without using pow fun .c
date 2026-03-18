#include <stdio.h>

int main() {
    int base, exponent;
   
    long long result = 1;

    printf("Enter a base number: ");
   
    if (scanf("%d", &base) != 1) return 1;

    printf("Enter an exponent (positive integer): ");
    
    if (scanf("%d", &exponent) != 1) return 1;

    int original_exponent = exponent;

   
    while (exponent != 0) {
        result *= base; 
        --exponent;     
    }

    printf("%d^%d = %lld\n", base, original_exponent, result);

    return 0;
}

