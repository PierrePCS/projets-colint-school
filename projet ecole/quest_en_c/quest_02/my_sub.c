#include <stdio.h>
int my_sub(int param_1, int param_2) {
    return param_1 - param_2;
}

int main(void) {
    int resultat = my_sub(2, 3);
    printf("%d\n", resultat);
    return 0;
}