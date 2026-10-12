#include <stdio.h>
int my_add(int param_1, int param_2) {
    return param_1 + param_2;
}

int main(void) {
    int resultat = my_add(2, 3);
    printf("%d\n", resultat);
    return 0;
}