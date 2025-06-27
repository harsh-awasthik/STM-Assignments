#include <stdio.h>
#include "helper.h"

int main(){
    struct v st;
    printf("Enter a number for signed int: ");
    scanf("%i", &st.sign_int);
    printf("%i\n", st.sign_int);

    printf("Enter a number for unsigned int: ");
    scanf("%u", &st.unsign_int);
    printf("%u\n", st.unsign_int);

    printf("\nIF YOU ARE SEEING ANY UNEXPECTED NUMBER HERE THEN THAT THIS MEANS THAT THE VARIABLE CANT STORE THESE VALUES.\n");
    return 0;
}