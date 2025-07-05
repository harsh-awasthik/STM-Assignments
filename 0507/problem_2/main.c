#include <stdio.h>

extern int get_val();

int main(){
    printf("The value for the Variable from 'main' is %i.\n", get_val());
}