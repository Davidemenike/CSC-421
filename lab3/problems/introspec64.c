#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main ()
{
    union {
        double f;
        uint64_t u;
    } p;

    p.f = -13.0;
    uint64_t i = 1;
    uint64_t sign = (p.u >> 63) & 1;
    uint64_t exp = (p.u >> 52) & ((1ul << 11)-1);

    uint64_t coef_mask = ((i << 52) - 1);
    uint64_t coef = p.u & coef_mask;

    printf("%ld\n", sign);
    printf("%ld\n", exp);
    printf("0x%llx\n", coef);
    
    return 0;
}