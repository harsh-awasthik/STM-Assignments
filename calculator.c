#include <stdio.h>
// #include <stdlib.h>
int main(){
    int a, b, o;

    printf("Enter First Number: ");
    scanf("%i", &a);
    printf("Enter Second Number: ");
    scanf("%i", &b);

    while(1){
        printf("Select Operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division.\n");
        printf("Enter the Number of Operation eg(1): ");
        scanf("%i", &o);

        switch (o){
            case 1:
                printf("The Addition of %i and %i is: %i\n", a, b, a+b);
                return 0;
            case 2:
                printf("The Subtraction of %i from %i is: %i\n", b, a, a-b);
                return 0;
            case 3:
                printf("The Multiplication of %i and %i is: %i\n", a, b, a*b);
                return 0;
            case 4:
                if (b == 0) printf("Indeterminate.\n");
                else printf("The Division of %i by %i is: %.3f\n", a, b, (float)a/b);
                return 0;
            default:
                printf("Select a Valid Operation.\n");
                printf("------------------------\n");
        }
    }
}