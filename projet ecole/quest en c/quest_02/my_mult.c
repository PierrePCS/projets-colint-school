#include <stdio.h>
int my_mult(int param_1, int param_2) {
    return param_1 * param_2;
}

int main(void) {
    int resultat = my_mult(2, 3);
    printf("%d\n", resultat);
    return 0;
}