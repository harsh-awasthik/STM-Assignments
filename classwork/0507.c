#include<stdio.h>
#include <stdint.h>

uint32_t nvar1;

int main(){
    nvar1 = 0x00000001;

    nvar1 = nvar1 << 1;
    printf("%08X\n", nvar1);
}